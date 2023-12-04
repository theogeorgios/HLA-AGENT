
/*******************************************************************************
       testFederateShell.h
       This header file is included by testFederateShell.cc

*******************************************************************************/

#ifndef _TESTFEDERATESHELL_INCLUDED
#define _TESTFEDERATESHELL_INCLUDED

#include <stdio.h>

#ifdef MOTIF
#include <Xm/Xm.h>
#include <Xm/MwmUtil.h>
#include <Xm/MenuShell.h>
#endif /* MOTIF */

#include "UxXt.h"

#ifndef XKLOADDS
#define XKLOADDS
#endif /* XKLOADDS */

/*******************************************************************************
       The definition of the interface class.
       If you create multiple copies of your interface, the class
       ensures that your callbacks use the variables for the
       correct copy.

       For each swidget in the interface, each argument to the Interface
       function, and each variable in the Interface Specific section of the
       Declarations Editor, there is an entry in the class protected section.
       Additionally, methods generated by the builder are declared as 
       virtual. Wrapper functions are generated for callbacks and actions
       to call the user defined callbacks or actions. A UxDestroyContextCB()
       is also generated to ensure a proper clean up of the class after
       the toplevel is destroyed.
*******************************************************************************/

class _UxCtestFederateShell: public _UxCInterface
{

// Generated Class Members

public:

 // Constructor Function
 _UxCtestFederateShell( swidget UxParent );

 // Destructor Function
 ~_UxCtestFederateShell();

 // Interface Function
 Widget _create_testFederateShell( void );

protected:

 // Widgets in the interface
 Widget testFederateShell;
 Widget mainWindow1;
 Widget menubar;
 Widget fileMenu;
 Widget outputSelectionItem;
 Widget menu1_p1_b4;
 Widget quitItem;
 Widget fileCMenu;
 Widget federationMenu;
 Widget createFedItem;
 Widget destroyFedItem;
 Widget joinFedItem;
 Widget resignItem;
 Widget federationMenu_b17;
 Widget registerSyncPointItem;
 Widget syncPointAchievedItem;
 Widget federationMenu_b18;
 Widget requestFederationSaveItem;
 Widget federateSaveBegunItem;
 Widget federateSaveAchievedItem;
 Widget federateSaveNotAchievedItem;
 Widget requestRestoreItem;
 Widget restoreAchievedItem;
 Widget restoreNotAchievedItem;
 Widget federationCMenu;
 Widget declarationMenu;
 Widget publicationsPane;
 Widget publishObjItem;
 Widget unpublishObjItem;
 Widget publishInteractionItem;
 Widget unpublishInteractionItem;
 Widget publicationsCMenu;
 Widget subscriptionsPane;
 Widget subscribeObjectClassItem;
 Widget unsubscribeObjectClassItem;
 Widget subscribeIntItem;
 Widget unsubscribeIntItem;
 Widget subscriptionsCMenu;
 Widget declarationCMenu;
 Widget registerObjectItem;
 Widget updateAttrValuesItem;
 Widget sendInteractionItem;
 Widget deleteObjectItem;
 Widget localDeleteObjectItem;
 Widget objectsMenu_b18;
 Widget attrTransportTypeItem;
 Widget interactionTransportTypeItem;
 Widget requestObjectUpdateItem;
 Widget requestClassUpdateItem;
 Widget objectCMenu;
 Widget uncondAttrOwnDivItem;
 Widget negAttrOwnDivItem;
 Widget attrOwnAcqItem;
 Widget attrOwnAcqIfAvaItem;
 Widget attrOwnRelResponseItem;
 Widget cancelOwnDivItem;
 Widget cancelOwnAcqItem;
 Widget queryAttrOwnItem;
 Widget attrIsOwnedByFederateItem;
 Widget ownershipCMenu;
 Widget timeMenu;
 Widget enableTimeRegulationItem;
 Widget disableTimeRegulationItem;
 Widget enableTimeConstrainedItem;
 Widget disableTimeConstrainedItem;
 Widget timeMenu_b17;
 Widget timeAdvanceReqItem;
 Widget timeAdvanceReqAvailableItem;
 Widget nextEventReqItem;
 Widget nextEventReqAvailableItem;
 Widget flushQueueRequestsItem;
 Widget timeMenu_b8;
 Widget enableAsynchronousDeliveryItem;
 Widget disableAsynchronousDeliveryItem;
 Widget timeMenu_b18;
 Widget requestLBTSitem;
 Widget requestFederateTimeItem;
 Widget requestMinEventTimeItem;
 Widget changeLookaheadItem;
 Widget requestLookaheadItem;
 Widget timeMenu_b20;
 Widget retractItem;
 Widget changeAttrOrderTypeItem;
 Widget changeInteractionOrderTypeItem;
 Widget timeCMenu;
 Widget DDMmenu;
 Widget createUpdateRegionItem;
 Widget modifyRegionItem;
 Widget deleteRegionItem;
 Widget registerObjWIthRegionItem;
 Widget DDMmenu_b7;
 Widget regionAssociationPane;
 Widget associateRegionForUpdatesItem;
 Widget unassociateRegionForUPdatesItem;
 Widget regionAssociationCMenu;
 Widget subscriptionWithRegionPane;
 Widget subObjAttrWithRegionItem;
 Widget unsubObjClassWithRegionItem;
 Widget subIntClassWithRegionItem;
 Widget unsubIntClassWithRegion;
 Widget subscriptionWithRegionCMenu;
 Widget DDMmenu_b11;
 Widget sendInteractionWithRegionItem;
 Widget reqClassAttrValueUpdateWithRegionItem;
 Widget DDMmenu_b12;
 Widget aboutRegionPane;
 Widget setRangeLowerBoundItem;
 Widget setRangeUpperBoundItem;
 Widget getRangeLowerBoundItem;
 Widget getRangeUpperBoundItem;
 Widget getSpaceHandleForRegionItem;
 Widget getNumberOfExtentsItem;
 Widget getRangeLowerBoundNotificationLimitItem;
 Widget getRangeUpperBoundNotificationLimitItem;
 Widget aboutRegionCMenu;
 Widget menubar_top_b2;
 Widget supportMenu;
 Widget nameToHandlePane;
 Widget getObjClassHandleItem;
 Widget getAttrHandleItem;
 Widget getInteractionClassHandleItem;
 Widget getParamaterHandleItem;
 Widget getObjectHandleItem;
 Widget getSpaceHandleItem;
 Widget getDimensionHandleItem;
 Widget getTransportationHandleItem;
 Widget getOrderingHandleItem;
 Widget nameToHandleCMenu;
 Widget handleToNamePane;
 Widget getObjClassNameItem;
 Widget getAttrNameItem;
 Widget getInteractionClassNameItem;
 Widget getParameterNameItem;
 Widget getObjectNameItem;
 Widget getSpaceNameItem;
 Widget getDimensionNameItem;
 Widget getTransportationNameItem;
 Widget getOrderingNameItem;
 Widget handleToNameCMenu;
 Widget supportMenu_b18;
 Widget getAttrSpaceHandleItem;
 Widget getObjectClassItem;
 Widget getIntSpaceHandleItem;
 Widget supportMenu_b19;
 Widget advisorySwitchPane;
 Widget enableClassRelevanceAdvisorySwitchItem;
 Widget disableClassRelevanceAdvisorySwitchItem;
 Widget enableAttributeRelevanceAdvisorySwitchItem;
 Widget disableAttributeRelevanceAdvisorySwitchItem;
 Widget enableAttributeScopeAdvisorySwitchItem;
 Widget disableAttributeScopeAdvisorySwitchItem;
 Widget enableInteractionRelevanceAdvisorySwitchItem;
 Widget disableInteractionRelevanceAdvisorySwitchItem;
 Widget advisorySwitchCMenu;
 Widget supportMenu_b9;
 Widget manualTickItem;
 Widget supportCMenu;
 Widget form1;
 Widget outputWindow;
 Widget messageWindowMenu;
 Widget menu1_p1_title;
 Widget titleSeparator;
 Widget clearWindowItem;
 Widget insertMarkerItem;

 // Arg List of creation function
 swidget UxParent;

 // Callbacks and their wrappers
 virtual void  activateCB_recordItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_recordItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_replayItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_replayItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_outputSelectionItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_outputSelectionItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_quitItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_quitItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_createFedItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_createFedItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_destroyFedItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_destroyFedItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_joinFedItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_joinFedItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_resignItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_resignItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_registerSyncPointItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_registerSyncPointItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_syncPointAchievedItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_syncPointAchievedItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_requestFederationSaveItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_requestFederationSaveItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_federateSaveBegunItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_federateSaveBegunItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_federateSaveAchievedItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_federateSaveAchievedItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_federateSaveNotAchievedItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_federateSaveNotAchievedItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_requestRestoreItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_requestRestoreItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_restoreAchievedItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_restoreAchievedItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_restoreNotAchievedItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_restoreNotAchievedItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_publishObjItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_publishObjItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_unpublishObjItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_unpublishObjItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_publishInteractionItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_publishInteractionItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_unpublishInteractionItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_unpublishInteractionItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_subscribeObjectClassItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_subscribeObjectClassItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_unsubscribeObjectClassItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_unsubscribeObjectClassItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_subscribeIntItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_subscribeIntItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_unsubscribeIntItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_unsubscribeIntItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_registerObjectItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_registerObjectItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_updateAttrValuesItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_updateAttrValuesItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_sendInteractionItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_sendInteractionItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_deleteObjectItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_deleteObjectItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_localDeleteObjectItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_localDeleteObjectItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_attrTransportTypeItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_attrTransportTypeItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_interactionTransportTypeItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_interactionTransportTypeItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_requestObjectUpdateItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_requestObjectUpdateItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_requestClassUpdateItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_requestClassUpdateItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_uncondAttrOwnDivItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_uncondAttrOwnDivItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_negAttrOwnDivItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_negAttrOwnDivItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_attrOwnAcqItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_attrOwnAcqItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_attrOwnAcqIfAvaItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_attrOwnAcqIfAvaItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_attrOwnRelResponseItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_attrOwnRelResponseItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_cancelOwnDivItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_cancelOwnDivItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_cancelOwnAcqItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_cancelOwnAcqItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_queryAttrOwnItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_queryAttrOwnItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_attrIsOwnedByFederateItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_attrIsOwnedByFederateItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_enableTimeRegulationItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_enableTimeRegulationItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_disableTimeRegulationItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_disableTimeRegulationItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_enableTimeConstrainedItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_enableTimeConstrainedItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_disableTimeConstrainedItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_disableTimeConstrainedItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_timeAdvanceReqItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_timeAdvanceReqItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_timeAdvanceReqAvailableItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_timeAdvanceReqAvailableItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_nextEventReqItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_nextEventReqItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_nextEventReqAvailableItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_nextEventReqAvailableItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_flushQueueRequestsItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_flushQueueRequestsItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_enableAsynchronousDeliveryItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_enableAsynchronousDeliveryItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_disableAsynchronousDeliveryItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_disableAsynchronousDeliveryItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_requestLBTSitem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_requestLBTSitem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_requestFederateTimeItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_requestFederateTimeItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_requestMinEventTimeItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_requestMinEventTimeItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_changeLookaheadItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_changeLookaheadItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_requestLookaheadItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_requestLookaheadItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_retractItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_retractItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_changeAttrOrderTypeItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_changeAttrOrderTypeItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_changeInteractionOrderTypeItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_changeInteractionOrderTypeItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_createUpdateRegionItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_createUpdateRegionItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_modifyRegionItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_modifyRegionItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_deleteRegionItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_deleteRegionItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_registerObjWIthRegionItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_registerObjWIthRegionItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_associateRegionForUpdatesItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_associateRegionForUpdatesItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_unassociateRegionForUPdatesItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_unassociateRegionForUPdatesItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_subObjAttrWithRegionItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_subObjAttrWithRegionItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_unsubObjClassWithRegionItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_unsubObjClassWithRegionItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_subIntClassWithRegionItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_subIntClassWithRegionItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_unsubIntClassWithRegion(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_unsubIntClassWithRegion(Widget, XtPointer, XtPointer);
 virtual void  activateCB_sendInteractionWithRegionItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_sendInteractionWithRegionItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_reqClassAttrValueUpdateWithRegionItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_reqClassAttrValueUpdateWithRegionItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_setRangeLowerBoundItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_setRangeLowerBoundItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_setRangeUpperBoundItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_setRangeUpperBoundItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_getRangeLowerBoundItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_getRangeLowerBoundItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_getRangeUpperBoundItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_getRangeUpperBoundItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_getSpaceHandleForRegionItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_getSpaceHandleForRegionItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_getNumberOfExtentsItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_getNumberOfExtentsItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_getRangeLowerBoundNotificationLimitItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_getRangeLowerBoundNotificationLimitItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_getRangeUpperBoundNotificationLimitItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_getRangeUpperBoundNotificationLimitItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_getObjClassHandleItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_getObjClassHandleItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_getAttrHandleItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_getAttrHandleItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_getInteractionClassHandleItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_getInteractionClassHandleItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_getParamaterHandleItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_getParamaterHandleItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_getObjectHandleItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_getObjectHandleItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_getSpaceHandleItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_getSpaceHandleItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_getDimensionHandleItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_getDimensionHandleItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_getTransportationHandleItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_getTransportationHandleItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_getOrderingHandleItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_getOrderingHandleItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_getObjClassNameItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_getObjClassNameItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_getAttrNameItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_getAttrNameItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_getInteractionClassNameItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_getInteractionClassNameItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_getParameterNameItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_getParameterNameItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_getObjectNameItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_getObjectNameItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_getSpaceNameItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_getSpaceNameItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_getDimensionNameItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_getDimensionNameItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_getTransportationNameItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_getTransportationNameItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_getOrderingNameItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_getOrderingNameItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_getAttrSpaceHandleItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_getAttrSpaceHandleItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_getObjectClassItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_getObjectClassItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_getIntSpaceHandleItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_getIntSpaceHandleItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_enableClassRelevanceAdvisorySwitchItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_enableClassRelevanceAdvisorySwitchItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_disableClassRelevanceAdvisorySwitchItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_disableClassRelevanceAdvisorySwitchItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_enableAttributeRelevanceAdvisorySwitchItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_enableAttributeRelevanceAdvisorySwitchItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_disableAttributeRelevanceAdvisorySwitchItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_disableAttributeRelevanceAdvisorySwitchItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_enableAttributeScopeAdvisorySwitchItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_enableAttributeScopeAdvisorySwitchItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_disableAttributeScopeAdvisorySwitchItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_disableAttributeScopeAdvisorySwitchItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_enableInteractionRelevanceAdvisorySwitchItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_enableInteractionRelevanceAdvisorySwitchItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_disableInteractionRelevanceAdvisorySwitchItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_disableInteractionRelevanceAdvisorySwitchItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_manualTickItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_manualTickItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_autoTickItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_autoTickItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_clearWindowItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_clearWindowItem(Widget, XtPointer, XtPointer);
 virtual void  activateCB_insertMarkerItem(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_insertMarkerItem(Widget, XtPointer, XtPointer);

 // Callback function to destroy the context
 static void  UxDestroyContextCB(Widget, XtPointer, XtPointer);

 static void MenuPost(Widget, XtPointer, XEvent *);
private:
 Widget _build();
 CPLUS_ADAPT_CONTEXT(_UxCtestFederateShell)

// User Supplied Class Members

} ;

extern Widget recordItem;
extern Widget replayItem;
extern Widget objectMenu;
extern Widget ownershipMenu;
extern Widget autoTickItem;
extern Widget statusLine;
extern Widget separator4;
extern Widget outputWindowText;

/*******************************************************************************
       Declarations of global functions.
*******************************************************************************/

Widget create_testFederateShell( swidget UxParent );

#endif /* _TESTFEDERATESHELL_INCLUDED */
