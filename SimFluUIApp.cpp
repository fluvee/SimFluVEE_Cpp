/***************************************************************
 * Name:      SimFluUIApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Amit Verma ()
 * Created:   2015-05-11
 * Copyright: Amit Verma ()
 * License:
 **************************************************************/

#include "SimFluUIApp.h"
#include "wx_pch.h"


//(*AppHeaders
#include "SimFluUIMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(SimFluUIApp);

bool SimFluUIApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	SimFluUIFrame* Frame = new SimFluUIFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
