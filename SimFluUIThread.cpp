#include "SimFluUIThread.h"


void* SimFluUIThread::Entry()
{
 //   m_Mutex->Lock();

 //   while (!TestDestroy()){ 
 

        wxGenericProgressDialog*  ProgressDialog1 = new wxGenericProgressDialog(_("Progress"),_("Preparing"),m_param.NSim,NULL,wxPD_CAN_ABORT|wxPD_ELAPSED_TIME);
        Simulator* current = new Simulator(m_param,ProgressDialog1);
        current->Start();
        delete current;current = NULL;
        delete ProgressDialog1;ProgressDialog1=NULL;
          
//        wxQueueEvent(m_pHandler, new wxThreadEvent(wxEVT_COMMAND_SIMFLUUITHREAD_UPDATE));    
//    }
    wxQueueEvent(m_pHandler, new wxThreadEvent(wxEVT_COMMAND_SIMFLUUITHREAD_COMPLETED));
    return 0;

 //   m_Mutex->Unlock();


}

SimFluUIThread::~SimFluUIThread()
{
//    wxCriticalSectionLocker enter(m_pHandler->Thread1CS);
//    m_pHandler->Thread1 = NULL;
}
