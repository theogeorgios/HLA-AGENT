
/*******************************************************************************
       fileSelectionShell.h
       This header file is included by fileSelectionShell.cc

*******************************************************************************/

#ifndef _FILESELECTIONSHELL_INCLUDED
#define _FILESELECTIONSHELL_INCLUDED

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

class _UxCfileSelectionShell: public _UxCInterface
{

// Generated Class Members

public:

 // Constructor Function
 _UxCfileSelectionShell( swidget UxParent, swidget outputFileField );

 // Destructor Function
 ~_UxCfileSelectionShell();

 // Interface Function
 Widget _create_fileSelectionShell( void );

protected:

 // Widgets in the interface
 Widget fileSelectionShell;
 Widget fileSelectionBoxDialog;

 // Arg List of creation function
 swidget UxParent;
 swidget outputFileField;

 // Callbacks and their wrappers
 virtual void  cancelCB_fileSelectionBoxDialog(Widget, XtPointer, XtPointer);
 static void  Wrap_cancelCB_fileSelectionBoxDialog(Widget, XtPointer, XtPointer);
 virtual void  okCallback_fileSelectionBoxDialog(Widget, XtPointer, XtPointer);
 static void  Wrap_okCallback_fileSelectionBoxDialog(Widget, XtPointer, XtPointer);

 // Callback function to destroy the context
 static void  UxDestroyContextCB(Widget, XtPointer, XtPointer);

private:
 Widget _build();
 CPLUS_ADAPT_CONTEXT(_UxCfileSelectionShell)

// User Supplied Class Members

} ;


/*******************************************************************************
       Declarations of global functions.
*******************************************************************************/

Widget create_fileSelectionShell( swidget UxParent, swidget outputFileField );

#endif /* _FILESELECTIONSHELL_INCLUDED */