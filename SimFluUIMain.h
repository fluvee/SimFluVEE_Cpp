/***************************************************************
 * Name:      SimFluUIMain.h
 * Purpose:   Defines Application Frame
 * Author:    Amit Verma ()
 * Created:   2015-05-11
 * Copyright: Amit Verma ()
 * License:
 **************************************************************/

#ifndef SIMFLUUIMAIN_H
#define SIMFLUUIMAIN_H

//(*Headers(SimFluUIFrame)
#include <wx/notebook.h>
#include <wx/stattext.h>
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/msgdlg.h>
#include <wx/checkbox.h>
#include <wx/spinctrl.h>
#include <wx/statline.h>
#include <wx/radiobut.h>
#include <wx/toolbar.h>
#include <wx/panel.h>
#include <wx/grid.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
#include <wx/thread.h>
#include <wx/sizer.h>
#include <wx/filepicker.h>
#include <wx/filename.h> 
//#include <wx/progdlg.h>
//*)

#include "wx_pch.h"
#include "SimFluUIThread.h"
#include <wx/msgdlg.h>
#include <fstream>
#include <iostream>
#include "src/simulator.h"
#include "src/params.h"
#include <sstream>
#include <cstdlib>
#include <chrono>
#include <wx/msgqueue.h>
#include <ctime>
#include <chrono>
#include <iomanip>
#include <locale>


class SimFluUIFrame: public wxFrame
{
    public:

        SimFluUIFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~SimFluUIFrame();



    private:

        //(*Handlers(SimFluUIFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnClose(wxCloseEvent& event);
        void OnPanel1Paint(wxPaintEvent& event);
        void OnCheckBox1Click(wxCommandEvent& event);
        void OnPanel1Paint1(wxPaintEvent& event);
        void OnScrolledWindow1Paint(wxPaintEvent& event);
        void OnGrid1CellLeftClick(wxGridEvent& event);
        void OnNotebook1PageChanged(wxNotebookEvent& event);
        void OnGrid1CellLeftClick1(wxGridEvent& event);
        void OnGrid1CellLeftClick2(wxGridEvent& event);
        void OnGrid2CellLeftClick(wxGridEvent& event);
        void OnSpinCtrl1Change(wxSpinEvent& event);
        void OnSpinCtrl3Change(wxSpinEvent& event);
        void StrataChange();
        void MonthChange();
        void Initial();
        int ErrorCheck();
        void Save();
        void OnButton1Click(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        void OnButton3Click(wxCommandEvent& event);
        void OnButton8Click(wxCommandEvent& event);
        void OnClose1(wxCloseEvent& event);
        void OnNotebook2PageChanged(wxNotebookEvent& event);
        void OnNotebook3PageChanged(wxNotebookEvent& event);
        void OnButton4Click(wxCommandEvent& event);
        void OnGrid20CellLeftClick(wxGridEvent& event);
        void OnTextCtrl5Text(wxCommandEvent& event);
    //    void OnButton5Click(wxCommandEvent& event);
    //    void OnButton5Click1(wxCommandEvent& event);
        void OnButton6Click(wxCommandEvent& event);
        void OnButton7Click(wxCommandEvent& event);
        std::istream& safeGetline(std::istream& is, std::string& t);
        void ViewResults();
        void ShowMore();
       // void OnClose(wxCloseEvent& event);

        void OnThreadCompletion(wxThreadEvent&);
        void OnThreadUpdate(wxThreadEvent&);
        void DoPauseThread();
        //*)

        //(*Identifiers(SimFluUIFrame)
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT1;
        static const long ID_CHECKBOX2;
        static const long ID_CHECKBOX3;
        static const long ID_CHECKBOX4;
        static const long ID_CHECKBOX5;
        static const long ID_CHECKBOX7;
        static const long ID_CHECKBOX12;
        static const long ID_CHECKBOX11;
        static const long ID_CHECKBOX10;
        static const long ID_CHECKBOX9;
        static const long ID_CHECKBOX8;
        static const long ID_CHECKBOX6;
        static const long ID_CHECKBOX1;
        static const long ID_CHECKBOX13;
        static const long ID_PANEL2;
        static const long ID_STATICLINE2;
        static const long ID_STATICLINE3;
        static const long ID_STATICTEXT5;
        static const long ID_RADIOBUTTON1;
        static const long ID_RADIOBUTTON2;
        static const long ID_PANEL3;
        static const long ID_STATICTEXT7;
        static const long ID_STATICTEXT6;
        static const long ID_TEXTCTRL4;
        static const long ID_STATICTEXT4;
        static const long ID_TEXTCTRL1;
        static const long ID_STATICTEXT3;
        static const long ID_TEXTCTRL2;
        static const long ID_SPINCTRL1;
        static const long ID_STATICTEXT9;
        static const long ID_STATICTEXT8;
        static const long ID_SPINCTRL3;
        static const long ID_STATICTEXT10;
        static const long ID_SPINCTRL4;
        static const long ID_TEXTCTRL5;
        static const long ID_PANEL4;
        static const long ID_GRID1;
        static const long ID_PANEL6;
        static const long ID_GRID2;
        static const long ID_PANEL7;
        static const long ID_GRID3;
        static const long ID_PANEL8;
        static const long ID_GRID4;
        static const long ID_PANEL9;
        static const long ID_GRID5;
        static const long ID_PANEL10;
        static const long ID_GRID6;
        static const long ID_PANEL11;
        static const long ID_GRID7;
        static const long ID_PANEL12;
        static const long ID_GRID20;
        static const long ID_PANEL27;
    //    static const long ID_TEXTCTRL3;
    //    static const long ID_PANEL13;
        static const long ID_NOTEBOOK1;
        static const long ID_PANEL5;
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long ID_BUTTON4;
    //    static const long ID_BUTTON5;
        static const long ID_BUTTON6;
        static const long ID_BUTTON7;
        static const long ID_BUTTON8;
        static const long ID_PANEL1;
        static const long ID_GRID8;
        static const long ID_PANEL15;
        static const long ID_GRID9;
        static const long ID_PANEL16;
        static const long ID_GRID10;
        static const long ID_PANEL17;
        static const long ID_GRID11;
        static const long ID_PANEL18;
        static const long ID_GRID12;
        static const long ID_PANEL19;
        static const long ID_GRID13;
        static const long ID_PANEL20;
        static const long ID_GRID14;
        static const long ID_PANEL21;
        static const long ID_GRID15;
        static const long ID_PANEL22;
        static const long ID_GRID16;
        static const long ID_PANEL23;
        static const long ID_GRID17;
        static const long ID_PANEL24;
        static const long ID_GRID18;
        static const long ID_PANEL25;
        static const long ID_GRID19;
        static const long ID_PANEL26;
        static const long ID_PANEL28;
        static const long ID_PANEL29;
        static const long ID_NOTEBOOK3;
        static const long ID_PANEL14;
        static const long ID_NOTEBOOK2;
        static const long ID_STATUSBAR1;
        static const long ID_TOOLBARITEM1;
        static const long ID_TOOLBARITEM2;
        static const long ID_TOOLBARITEM3;
        static const long ID_TOOLBAR1;
        static const long ID_MESSAGEDIALOG1;
        static const long ID_MESSAGEDIALOG2;
        static const long ID_MESSAGEDIALOG3;
        //static const long ID_PROGRESSDIALOG1;
        static const long idMenuQuit;
        static const long idMenuAbout;
     //   static const long idClose;
     //   static const long ID_THREAD1;
     //   static const long ID_MUTEX1;
        static const long ID_HBOX2;
        //*)

        bool DataChanged;
        string prefix;
        string  outputFilesPath;
  string inputfilename;
  string InputsReportFile;      //Print out inputs
  string CReportFile;       //Print out contact report
  string DReportPersonFile; //Print out daily report by person
  string IReportDailyFile;
  string PReportFile;
  string DReportSummaryFile;//Print out overall daily report
  string VReportFile;       //Print out vaccination report
  string DReportSumFile;
  string MReportSimFile;    //Print out monthly report by simulation
  string MReportSumFile;//Print out overall monthly report
  string SReportSimFile;    //Print out season report by simulation
  string YReportSumFile;//Print out overall season report
  string PopReportFile;//Print out population report

        //(*Declarations(SimFluUIFrame)
    //    wxDirPickerCtrl* DirPickerCtrl1;
    //    wxStaticText* StaticText10;
        // wxDialog* Dialog1;
        wxStaticText* StaticText13;
        // wxDirPickerCtrl* DirPickerCtrl1;
        // wxButton* Button8;
        wxPanel* Panel35;
        wxPanel* Panel23;
        wxPanel* Panel20;
        wxStaticText* StaticText9;
        wxGrid* Grid17;
        wxGrid* Grid19;
        wxSpinCtrl* SpinCtrl4;
        wxTextCtrl* TextCtrl4;
        wxTextCtrl* TextCtrl6;
        wxGrid* Grid8;
        wxRadioButton* RadioButton1;
        wxPanel* Panel5;
        wxToolBar* ToolBar1;
        wxCheckBox* CheckBox9;
        wxButton* Button4;
        wxButton* Button6;
        wxButton* Button7;
        wxNotebook* Notebook1;
        wxToolBarToolBase* ToolBarItem3;
        wxSpinCtrl* SpinCtrl1;
        wxPanel* Panel27;
        wxGrid* Grid18;
        wxStaticText* StaticText2;
        wxPanel* Panel4;
        wxMenuItem* MenuItem2;
        wxRadioButton* RadioButton2;
        wxButton* Button1;
        wxGrid* Grid5;
        wxStaticText* StaticText6;
        wxMenuItem* MenuItem1;
        wxPanel* Panel25;
        wxPanel* Panel28;
        wxPanel* Panel21;
        wxPanel* Panel11;
        wxPanel* Panel9;
        wxPanel* Panel29;
        wxPanel* Panel30;
        wxPanel* Panel31;
        wxPanel* Panel32;
        wxPanel* Panel33;
        wxPanel* Panel34;
        wxStaticText* StaticText8;
        wxCheckBox* CheckBox3;
        wxGrid* Grid7;
        wxPanel* Panel8;
        wxCheckBox* CheckBox2;
        wxPanel* Panel26;
        wxCheckBox* CheckBox6;
        wxGrid* Grid16;
        wxPanel* Panel1;
        wxStaticText* StaticText1;
        wxGrid* Grid4;
        wxStaticText* StaticText3;
        wxGrid* Grid1;
        wxMenu* Menu1;
        wxPanel* Panel22;
        wxGrid* Grid6;
        wxGrid* Grid11;
        wxButton* Button2;
        wxPanel* Panel6;
        wxPanel* Panel3;
        wxCheckBox* CheckBox1;
        wxStaticLine* StaticLine2;
        wxStaticLine* StaticLine3;
        wxStaticLine* StaticLine4;
        wxStaticLine* StaticLine5;
        wxToolBarToolBase* ToolBarItem1;
    //    wxButton* Button5;
        wxPanel* Panel16;
        wxGrid* Grid2;
        wxPanel* Panel24;
        wxButton* Button3;
        wxSpinCtrl* SpinCtrl3;
        wxStaticText* StaticText5;
        wxStaticText* StaticText7;
        wxCheckBox* CheckBox10;
        wxGrid* Grid12;
        wxPanel* Panel7;
        wxStatusBar* StatusBar1;
        wxCheckBox* CheckBox12;
        wxPanel* Panel18;
        wxPanel* Panel15;
        wxTextCtrl* TextCtrl2;
        wxCheckBox* CheckBox4;
        wxCheckBox* CheckBox8;
        wxTextCtrl* TextCtrl1;
        wxCheckBox* CheckBox7;
        wxCheckBox* CheckBox13;
        wxGrid* Grid14;
        wxGrid* Grid10;
        wxGrid* Grid9;
        wxPanel* Panel14;
        wxMenuBar* MenuBar1;
        wxScrolledWindow*  Panel2;
        wxTextCtrl* TextCtrl5;
        wxGrid* Grid15;
        wxCheckBox* CheckBox5;
        wxPanel* Panel10;
        wxGrid* Grid3;
        wxMessageDialog* MessageDialog1;
        wxMessageDialog* MessageDialog2;
        wxMessageDialog* MessageDialog3;
    //    wxDialog* Dialog1;
        //wxGenericProgressDialog* ProgressDialog1;
        wxNotebook* Notebook2;
        wxNotebook* Notebook3;
        wxCheckBox* CheckBox11;
        wxMenu* Menu2;
        wxStaticText* StaticText4;
    //    wxTextCtrl* TextCtrl3;
        wxPanel* Panel12;
        wxGrid* Grid13;
        wxPanel* Panel17;
        wxToolBarToolBase* ToolBarItem2;
        wxGrid* Grid20;
        wxPanel* Panel13;
        wxPanel* Panel19;
        SimFluUIThread* Thread1;
        wxCriticalSection Thread1CS;
    //    wxMutex* Mutex1;
        wxBoxSizer* hbox2;
        //*)

        friend class SimFluUIThread;

        DECLARE_EVENT_TABLE()
};

#endif // SIMFLUUIMAIN_H
