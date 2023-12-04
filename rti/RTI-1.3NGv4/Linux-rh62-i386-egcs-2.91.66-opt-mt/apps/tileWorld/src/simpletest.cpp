#include "RTIAmbWrapper.hh"
#include "SimFederateAmbassador.hh"
#include "llist.hh"
#include "globals.hh"
//#include "FedAmbGlobals.hh"

#if !defined(WIN32) && !defined(VXWORKS) && !defined(__KCC) && (__SUNPRO_CC_COMPAT != 5)
#  include <stream.h>
#endif

#include <string.h>
#include <stdlib.h>

#if !defined(WIN32) && !defined(VXWORKS)
#  include <unistd.h>
#endif

#include <RTI.hh>
/*
#if defined(WIN32)
#  include <windows.h>   // for "Sleep"
#  include <sys/timeb.h> // for "struct _timeb"
#  include <iostream>
using std::cout;
using std::cerr;
using std::endl;
#elif defined(VXWORKS)
#  include <ace/OS.h>
#  include <iostream>
#  include <timers.h>
using std::cout;
using std::flush;
using std::endl;
using std::cerr;
#else
#  include <sys/time.h>
#endif
*/
#include <fedtime.hh>
//extern RTI::RTIambassador       rtiAmb;
//extern SimFederateAmbassador    fedAmb;

int num_attributes = 5;

//RTI::Boolean        timeAdvGrant = RTI::RTI_FALSE;
RTI::Boolean        TimeRegulation = RTI::RTI_FALSE;
RTI::Boolean        TimeConstrained = RTI::RTI_FALSE;
RTI::FedTime &      m_lastTime(*(RTI::FedTimeFactory::makeZero()));
RTI::FedTime &      m_TimePlusLookahead(*(RTI::FedTimeFactory::makeZero()));
RTIfedTime          ms_lookahead(1.0);
unsigned long timeStep=10;
//const RTIfedTime timeStep(10.0);


//The string names of classes & attributes in fed file
char* const  ms_TileTypeStr = "Tile";       
char* const  ms_nameTypeStr = "Name" ;
char* const  ms_popTypeStr = "Population" ;       
char* const  ms_xposTypeStr = "Xpos" ; 
char* const  ms_yposTypeStr = "Ypos" ; 
char* const  ms_objectTypeStr = "Objtype" ;
char* const  ms_commTypeStr = "Communication";
char* const  ms_commMsgTypeStr = "Message";

//declare and initialise the RTI Ids for attributes & classes
RTI::ObjectClassHandle       ms_TileTypeId    = 0;
RTI::AttributeHandle         ms_nameTypeId    = 0;
RTI::AttributeHandle         ms_popTypeId     = 0;
RTI::AttributeHandle         ms_xposTypeId    = 0;
RTI::AttributeHandle         ms_yposTypeId    = 0;
RTI::AttributeHandle         ms_objectTypeId  = 0;
RTI::InteractionClassHandle  ms_commTypeId    = 0;
RTI::ParameterHandle         ms_commMsgTypeId = 0;

RTI::ObjectHandle  m_instanceId;
/*
Queue_t *discoverObjectInstance_q= new Queue_t;
Queue_t *reflectAttributeValues_q= new Queue_t;
Queue_t *removeObjectInstance_q= new Queue_t;
Queue_t *provideAttributeValueUpdate_q= new Queue_t;
Queue_t *attributeOwnershipDivestitureNotification_q= new Queue_t;
Queue_t *attributeOwnershipAcquisitionNotification_q= new Queue_t;
Queue_t *attributeOwnershipUnavailable_q= new Queue_t;
Queue_t *timeRegulationEnabled_q= new Queue_t;
Queue_t *timeConstrainedEnabled_q= new Queue_t;
Queue_t *timeAdvanceGrant_q= new Queue_t;
*/


int main()
{

  const char* exeName = "Execute Name";         // Name of executable process
  char* const fedExecName = "HelloWorld"; // Name of the Federation Execution
  //int         numberOfTicks( 100 );
  
  
  int loopCounter = 0; 
  
  
  //------------------------------------------------------
  // Create RTI objects
  //
  // The federate communicates to the RTI through the RTIambassador
  // object and the RTI communicates back to the federate through
  // the FederateAmbassador object.
  //------------------------------------------------------
  //RTI::RTIambassador       rtiAmb;         // libRTI provided
  //  SimFederateAmbassador    fedAmb;         // User-defined
  
  // Named value placeholder for the federates handle -
  // we don't really use this in HelloWorld but some
  // services and MOM might need it - if we were to use them.
  RTI::FederateHandle      federateId;

  initialiseQueues();

  //------------------------------------------------------
  // Create federation execution.
  //
  // The RTI_CONFIG environment variable must be set in the
  // shell's environment to the directory that contains the
  // RTI.rid file and the HelloWorld.fed
  //      
  // In RTI 1.3, when a federate creates the federation 
  // execution the $RTI_HOME/bin/$RTI_ARCH/fedex.sh process
  // is executed on the localhost. Therefore, the RTI_HOME 
  // environment variable must be set to the root of the 
  // RTI 1.0 distribution tree in the federate environment.
  //------------------------------------------------------
  
  //------------------------------------------------------
  // A successful createFederationExecution will cause
  // the fedex process to be executed on this machine.
  //
  // A "HelloWorld.fed" file must exist in the current
  // directory. This file specifies the FOM
  // object and interaction class structures as well as 
  // default/initial transport and ordering information for
  // object attributes and interaction classes.
  //------------------------------------------------------
  cout << "FED_HW: CREATING FEDERATION EXECUTION" << endl;
  cout << "GOT HERE";
  createFederationExecution( fedExecName, "HelloWorld.fed" ); 
  cout << "FED_HW: SUCCESSFUL CREATE FEDERATION EXECUTION" << endl;

   
  unsigned *ref = getFederateAmbassadorRef();
  federateId = joinFederationExecution( "MYNAME",
					fedExecName, 
					ref);

  cout << "FED_HW: JOINED SUCCESSFULLY: " << exeName 
       << ": Federate Handle = " << federateId << endl;

  /*Get the Id values for corresponding strings*/
  ms_TileTypeId     = getObjectClassHandle(ms_TileTypeStr);
  ms_nameTypeId     = getAttributeHandle( ms_nameTypeStr,
					  ms_TileTypeId);
  ms_popTypeId      = getAttributeHandle( ms_popTypeStr,
					  ms_TileTypeId);
  ms_xposTypeId     = getAttributeHandle( ms_xposTypeStr,
					  ms_TileTypeId);
  ms_yposTypeId     = getAttributeHandle( ms_yposTypeStr,
					  ms_TileTypeId);
  ms_objectTypeId   = getAttributeHandle( ms_objectTypeStr,
					  ms_TileTypeId);
  
  //Create a handle set for declaration management
  AttributeHandleSet_t *tileAttributes= new AttributeHandleSet_t;
  
  tileAttributes->attributes = new unsigned long[6];
  
  tileAttributes->attributes[0]= ms_nameTypeId;
  tileAttributes->attributes[1]= ms_popTypeId;
  tileAttributes->attributes[2]= ms_xposTypeId;
  tileAttributes->attributes[3]= ms_yposTypeId;
  tileAttributes->attributes[4]= ms_objectTypeId;	 
  tileAttributes->size=5;
  
  publishObjectClass(ms_TileTypeId,tileAttributes);
  subscribeObjectClassAttributes(ms_TileTypeId,tileAttributes);
  
  
  
  //	 delete tileAttributes;   // Deallocate the memory
  
  //register an instance of class
  m_instanceId = registerObjectInstance(ms_TileTypeId);
  
  cout<<endl<<"m_instanceId"<<m_instanceId<<endl;
  
  unsigned long grantTime=0;
  
  
  enableTimeConstrained();
  enableTimeRegulation(grantTime,1);
  
  AttributeHandleValuePairSet_t *updateAttributes
    = new AttributeHandleValuePairSet_t;
  
  updateAttributes->ahvp = new AttributeHandleValuePair[5];
  updateAttributes->size =5;
  for(int i=0;i<5;i++){
    updateAttributes->ahvp[i].Id = tileAttributes->attributes[i];
    updateAttributes->ahvp[i].value="hello";
    updateAttributes->ahvp[i].length=5;
    cout <<"Update:"<<i
	 <<" Id:"<<updateAttributes->ahvp[i].Id
	 <<" value:"<<updateAttributes->ahvp[i].value 
	 <<" length: "<<updateAttributes->ahvp[i].length<<endl;
    
  }
  

  unsigned long requestTime=timeStep;
  //  unconditionalAttributeOwnershipDivesture(m_instanceId, tileAttributes);
  //   attributeOwnershipAcquisitionIfAvailable(m_instanceId, tileAttributes);
  
  //Action loop
    for(int i=0;i<10;i++){
  
      //Send updates 
      updateAttributeValues(m_instanceId,
			    updateAttributes,
			    grantTime);      
  
  //Request a time advance
    NODE *test = new NODE;
    
    //test=dequeue(timeAdvanceGrant_q);
    timeAdvanceRequest( requestTime );
    printQueueSizes();
    tick(1.0, 1.0);
    //    test=dequeue(timeAdvanceGrant_q);
    requestTime += timeStep;
    delete test;
    cout<<"THE TIME IS: "<<requestTime<<endl;
    grantTime =requestTime;
  

    tick(1.0, 1.0);
    }   
    requestClassAttributeValueUpdate(ms_TileTypeId,tileAttributes);
    
    unconditionalAttributeOwnershipDivesture(m_instanceId, tileAttributes);
    attributeOwnershipAcquisitionIfAvailable(m_instanceId, tileAttributes);


    printQueueSizes();

 
    NODE *test = new NODE;
  
    if(reflectAttributeValues_q->size!=0){
    test=dequeue(reflectAttributeValues_q);
    for(int i=0;i<5;i++){
      //   test->AHVPset[i].Id = tileAttributes[i];
      //    test->AHVPset[i].value="hello";
      //    test->AHVPset[i].length=5;
    cout <<"Update:"<<i
	 <<" Id:"<< test->AHVPset->ahvp[i].Id
	 <<" value:";
    for(int x=0;x<test->AHVPset->ahvp[i].length;x++)
      cout<<test->AHVPset->ahvp[i].value[x];	
    cout <<" length: "<<test->AHVPset->ahvp[i].length<<endl;    
    }

    cout<<endl<<"Pointer"<<&test->AHVPset<<endl;
    }
    // test=dequeue(timeAdvanceGrant_q);

    deleteObjectInstance(m_instanceId,grantTime);

    requestTime=0;
    cout<<"THE TIME IS: "<<requestTime<<endl;
    //requestTime += test->theTime;
    cout<<"THE TIME IS: "<<requestTime<<endl;

  
  //  requestTime += grantTime;  
  
  //  cout<<"THE TIME IS: "<<requestTime.getTime()<<endl;
  
  //prints the details of the first item in the linked list
  //  print_timeConstrainedEnabled();
    resignFederationExecution();
    destroyFederationExecution(fedExecName);

  return 0;
}

