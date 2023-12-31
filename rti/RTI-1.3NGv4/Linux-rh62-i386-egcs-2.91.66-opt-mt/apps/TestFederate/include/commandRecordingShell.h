
/*******************************************************************************
       commandRecordingShell.h
       This header file is included by commandRecordingShell.cc

*******************************************************************************/

#ifndef _COMMANDRECORDINGSHELL_INCLUDED
#define _COMMANDRECORDINGSHELL_INCLUDED

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

class _UxCcommandRecordingShell: public _UxCInterface
{

// Generated Class Members

public:

 // Constructor Function
 _UxCcommandRecordingShell( swidget UxParent );

 // Destructor Function
 ~_UxCcommandRecordingShell();

 // Interface Function
 Widget _create_commandRecordingShell( void );

protected:

 // Widgets in the interface
 Widget commandRecordingShell;
 Widget bulletinBoard2;
 Widget commandFileField;
 Widget commandRecordingSelectBtn;
 Widget separator1;
 Widget commandRecordingLabel;
 Widget commandRecordingOkBtn;
 Widget commandRecordingCancelBtn;
 Widget commandRecordingHelpBtn;

 // Arg List of creation function
 swidget UxParent;

 // Callbacks and their wrappers
 virtual void  popupCB_commandRecordingShell(Widget, XtPointer, XtPointer);
 static void  Wrap_popupCB_commandRecordingShell(Widget, XtPointer, XtPointer);
 virtual void  activateCB_commandRecordingSelectBtn(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_commandRecordingSelectBtn(Widget, XtPointer, XtPointer);
 virtual void  activateCB_commandRecordingOkBtn(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_commandRecordingOkBtn(Widget, XtPointer, XtPointer);
 virtual void  activateCB_commandRecordingCancelBtn(Widget, XtPointer, XtPointer);
 static void  Wrap_activateCB_commandRecordingCancelBtn(Widget, XtPointer, XtPointer);

 // Callback function to destroy the context
 static void  UxDestroyContextCB(Widget, XtPointer, XtPointer);

private:
 Widget _build();
 CPLUS_ADAPT_CONTEXT(_UxCcommandRecordingShell)

// User Supplied Class Members

} ;


/*******************************************************************************
       Declarations of global functions.
*******************************************************************************/

Widget create_commandRecordingShell( swidget UxParent );

#endif /* _COMMANDRECORDINGSHELL_INCLUDED */
