#ifndef SIMFLUUITHREAD_H
#define SIMFLUUITHREAD_H

#include <wx/thread.h>
#include <wx/event.h>
#include "src/simulator.h"
#include "src/params.h"
#include <iostream>
#include <wx/msgqueue.h>
#include <chrono>
#include <wx/textctrl.h>
#include <wx/progdlg.h>


wxDECLARE_EVENT(wxEVT_COMMAND_SIMFLUUITHREAD_COMPLETED, wxThreadEvent);
wxDECLARE_EVENT(wxEVT_COMMAND_SIMFLUUITHREAD_UPDATE, wxThreadEvent);


class SimFluUIThread : public wxThread
{
    public:
        SimFluUIThread(wxEvtHandler* handler, Params* param)
            : wxThread(wxTHREAD_DETACHED)
            { m_pHandler = handler; m_param = *param; }
        ~SimFluUIThread();
    private:
    //    wxWindow* m_frame;
        Params m_param;
    //    wxTextCtrl* m_TC;
    //    bool m_cancelled;
        void* Entry();
    //    wxStreamToTextRedirector m_redirect;
    protected:
        wxEvtHandler* m_pHandler;
    //    friend class SimFluUIFrame;
    //    void OnExit();

};
#endif
