/***************************************************************
 * Name:      SimFluUIMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Amit Verma ()
 * Created:   2015-05-11
 * Copyright: Amit Verma ()
 * License:
 **************************************************************/


#include "SimFluUIMain.h"


using namespace std;

//(*InternalHeaders(SimFluUIFrame)
#include <wx/artprov.h>
#include <wx/bitmap.h>
#include <wx/settings.h>
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
#include <wx/sizer.h>
//#include <wx/progdlg.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(SimFluUIFrame)
const long SimFluUIFrame::ID_STATICTEXT2 = wxNewId();
const long SimFluUIFrame::ID_STATICTEXT1 = wxNewId();
const long SimFluUIFrame::ID_CHECKBOX2 = wxNewId();
const long SimFluUIFrame::ID_CHECKBOX3 = wxNewId();
const long SimFluUIFrame::ID_CHECKBOX4 = wxNewId();
const long SimFluUIFrame::ID_CHECKBOX5 = wxNewId();
const long SimFluUIFrame::ID_CHECKBOX7 = wxNewId();
const long SimFluUIFrame::ID_CHECKBOX12 = wxNewId();
const long SimFluUIFrame::ID_CHECKBOX11 = wxNewId();
const long SimFluUIFrame::ID_CHECKBOX10 = wxNewId();
const long SimFluUIFrame::ID_CHECKBOX9 = wxNewId();
const long SimFluUIFrame::ID_CHECKBOX8 = wxNewId();
const long SimFluUIFrame::ID_CHECKBOX6 = wxNewId();
const long SimFluUIFrame::ID_CHECKBOX1 = wxNewId();
const long SimFluUIFrame::ID_CHECKBOX13 = wxNewId();
const long SimFluUIFrame::ID_PANEL2 = wxNewId();
const long SimFluUIFrame::ID_STATICLINE2 = wxNewId();
const long SimFluUIFrame::ID_STATICLINE3 = wxNewId();
const long SimFluUIFrame::ID_STATICTEXT5 = wxNewId();
const long SimFluUIFrame::ID_RADIOBUTTON1 = wxNewId();
const long SimFluUIFrame::ID_RADIOBUTTON2 = wxNewId();
const long SimFluUIFrame::ID_PANEL3 = wxNewId();
const long SimFluUIFrame::ID_STATICTEXT7 = wxNewId();
const long SimFluUIFrame::ID_STATICTEXT6 = wxNewId();
const long SimFluUIFrame::ID_TEXTCTRL4 = wxNewId();
const long SimFluUIFrame::ID_STATICTEXT4 = wxNewId();
const long SimFluUIFrame::ID_TEXTCTRL1 = wxNewId();
const long SimFluUIFrame::ID_STATICTEXT3 = wxNewId();
const long SimFluUIFrame::ID_TEXTCTRL2 = wxNewId();
const long SimFluUIFrame::ID_SPINCTRL1 = wxNewId();
const long SimFluUIFrame::ID_STATICTEXT9 = wxNewId();
const long SimFluUIFrame::ID_STATICTEXT8 = wxNewId();
const long SimFluUIFrame::ID_SPINCTRL3 = wxNewId();
const long SimFluUIFrame::ID_STATICTEXT10 = wxNewId();
const long SimFluUIFrame::ID_SPINCTRL4 = wxNewId();
const long SimFluUIFrame::ID_TEXTCTRL5 = wxNewId();
const long SimFluUIFrame::ID_PANEL4 = wxNewId();
const long SimFluUIFrame::ID_GRID1 = wxNewId();
const long SimFluUIFrame::ID_PANEL6 = wxNewId();
const long SimFluUIFrame::ID_GRID2 = wxNewId();
const long SimFluUIFrame::ID_PANEL7 = wxNewId();
const long SimFluUIFrame::ID_GRID3 = wxNewId();
const long SimFluUIFrame::ID_PANEL8 = wxNewId();
const long SimFluUIFrame::ID_GRID4 = wxNewId();
const long SimFluUIFrame::ID_PANEL9 = wxNewId();
const long SimFluUIFrame::ID_GRID5 = wxNewId();
const long SimFluUIFrame::ID_PANEL10 = wxNewId();
const long SimFluUIFrame::ID_GRID6 = wxNewId();
const long SimFluUIFrame::ID_PANEL11 = wxNewId();
const long SimFluUIFrame::ID_GRID7 = wxNewId();
const long SimFluUIFrame::ID_PANEL12 = wxNewId();
const long SimFluUIFrame::ID_GRID20 = wxNewId();
const long SimFluUIFrame::ID_PANEL27 = wxNewId();
//const long SimFluUIFrame::ID_TEXTCTRL3 = wxNewId();
//const long SimFluUIFrame::ID_PANEL13 = wxNewId();
const long SimFluUIFrame::ID_NOTEBOOK1 = wxNewId();
const long SimFluUIFrame::ID_PANEL5 = wxNewId();
const long SimFluUIFrame::ID_BUTTON1 = wxNewId();
const long SimFluUIFrame::ID_BUTTON2 = wxNewId();
const long SimFluUIFrame::ID_BUTTON3 = wxNewId();
const long SimFluUIFrame::ID_BUTTON4 = wxNewId();
//const long SimFluUIFrame::ID_BUTTON5 = wxNewId();
const long SimFluUIFrame::ID_BUTTON6 = wxNewId();
const long SimFluUIFrame::ID_BUTTON7 = wxNewId();
const long SimFluUIFrame::ID_BUTTON8 = wxNewId();
const long SimFluUIFrame::ID_PANEL1 = wxNewId();
const long SimFluUIFrame::ID_GRID8 = wxNewId();
const long SimFluUIFrame::ID_PANEL15 = wxNewId();
const long SimFluUIFrame::ID_GRID9 = wxNewId();
const long SimFluUIFrame::ID_PANEL16 = wxNewId();
const long SimFluUIFrame::ID_GRID10 = wxNewId();
const long SimFluUIFrame::ID_PANEL17 = wxNewId();
const long SimFluUIFrame::ID_GRID11 = wxNewId();
const long SimFluUIFrame::ID_PANEL18 = wxNewId();
const long SimFluUIFrame::ID_GRID12 = wxNewId();
const long SimFluUIFrame::ID_PANEL19 = wxNewId();
const long SimFluUIFrame::ID_PANEL28 = wxNewId();
const long SimFluUIFrame::ID_GRID13 = wxNewId();
const long SimFluUIFrame::ID_PANEL20 = wxNewId();
const long SimFluUIFrame::ID_GRID14 = wxNewId();
const long SimFluUIFrame::ID_PANEL21 = wxNewId();
const long SimFluUIFrame::ID_GRID15 = wxNewId();
const long SimFluUIFrame::ID_PANEL22 = wxNewId();
const long SimFluUIFrame::ID_GRID16 = wxNewId();
const long SimFluUIFrame::ID_PANEL23 = wxNewId();
const long SimFluUIFrame::ID_GRID17 = wxNewId();
const long SimFluUIFrame::ID_PANEL24 = wxNewId();
const long SimFluUIFrame::ID_GRID18 = wxNewId();
const long SimFluUIFrame::ID_PANEL25 = wxNewId();
const long SimFluUIFrame::ID_GRID19 = wxNewId();
const long SimFluUIFrame::ID_PANEL26 = wxNewId();
const long SimFluUIFrame::ID_PANEL29 = wxNewId();
const long SimFluUIFrame::ID_NOTEBOOK3 = wxNewId();
const long SimFluUIFrame::ID_PANEL14 = wxNewId();
const long SimFluUIFrame::ID_NOTEBOOK2 = wxNewId();
const long SimFluUIFrame::ID_STATUSBAR1 = wxNewId();
const long SimFluUIFrame::ID_TOOLBARITEM1 = wxNewId();
const long SimFluUIFrame::ID_TOOLBARITEM2 = wxNewId();
const long SimFluUIFrame::ID_TOOLBARITEM3 = wxNewId();
const long SimFluUIFrame::ID_TOOLBAR1 = wxNewId();
const long SimFluUIFrame::ID_MESSAGEDIALOG1 = wxNewId();
const long SimFluUIFrame::ID_MESSAGEDIALOG2 = wxNewId();
const long SimFluUIFrame::ID_MESSAGEDIALOG3 = wxNewId();
//const long SimFluUIFrame::ID_PROGRESSDIALOG1 = wxNewId();
const long SimFluUIFrame::idMenuQuit = wxNewId();
const long SimFluUIFrame::idMenuAbout = wxNewId();
//const long SimFluUIFrame::idClose = wxNewId();
const long SimFluUIFrame::ID_HBOX2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(SimFluUIFrame,wxFrame)
    //(*EventTable(SimFluUIFrame)
     //*)
END_EVENT_TABLE()

wxDEFINE_EVENT(wxEVT_COMMAND_SIMFLUUITHREAD_COMPLETED, wxThreadEvent);
wxDEFINE_EVENT(wxEVT_COMMAND_SIMFLUUITHREAD_UPDATE, wxThreadEvent);

SimFluUIFrame::SimFluUIFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(SimFluUIFrame)

    Create(parent, wxID_ANY, _("SimFlu V6"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(1632,971));
    this->Maximize(true);
    Notebook2 = new wxNotebook(this, ID_NOTEBOOK2, wxPoint(0,128), wxSize(2000,1000), 0, _T("ID_NOTEBOOK2"));
    Notebook2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWTEXT));
    Panel1 = new wxPanel(Notebook2, ID_PANEL1, wxPoint(136,144), wxSize(1620,971), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    Panel1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWTEXT));
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("SimFlu V6"), wxPoint(32,72), wxSize(248,40), 0, _T("ID_STATICTEXT2"));
    StaticText2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWTEXT));
    wxFont StaticText2Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
    StaticText2->SetFont(StaticText2Font);



    Panel2 = new wxScrolledWindow(Panel1, wxID_ANY, wxPoint(32,450), wxSize(344,432), wxTAB_TRAVERSAL, _T("ID_PANEL2"));
    StaticText1 = new wxStaticText(Panel2, ID_STATICTEXT1, _("Output files"), wxPoint(8,8), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    StaticText1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWTEXT));
    Panel30 = new wxPanel(Panel2, wxID_ANY, wxDefaultPosition, wxSize(100,20), wxTAB_TRAVERSAL);
    Panel31 = new wxPanel(Panel2, wxID_ANY, wxDefaultPosition, wxSize(100,20), wxTAB_TRAVERSAL);
    Panel32 = new wxPanel(Panel2, wxID_ANY, wxDefaultPosition, wxSize(100,20), wxTAB_TRAVERSAL);
    Panel33 = new wxPanel(Panel2, wxID_ANY, wxDefaultPosition, wxSize(100,20), wxTAB_TRAVERSAL);
    Panel34 = new wxPanel(Panel1, wxID_ANY, wxDefaultPosition, wxSize(8,30), wxTAB_TRAVERSAL);
    Panel35 = new wxPanel(Panel1, wxID_ANY, wxDefaultPosition, wxSize(344,20), wxTAB_TRAVERSAL);
    CheckBox2 = new wxCheckBox(Panel2, ID_CHECKBOX2, _("Inputs_and_Calculated_Parameters"), wxPoint(8,40), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX2"));
    CheckBox2->SetValue(false);
//    CheckBox2->Show(false);
    CheckBox2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWTEXT));
    CheckBox3 = new wxCheckBox(Panel2, ID_CHECKBOX3, _("Vaccination"), wxPoint(8,72), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX3"));
    CheckBox3->SetValue(false);
//    CheckBox3->Show(false);
    CheckBox3->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWTEXT));
    CheckBox4 = new wxCheckBox(Panel2, ID_CHECKBOX4, _("Detailed"), wxPoint(8,104), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX4"));
    CheckBox4->SetValue(false);
//    CheckBox4->Show(false);
    CheckBox4->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWTEXT));
    CheckBox5 = new wxCheckBox(Panel2, ID_CHECKBOX5, _("Contact_Report"), wxPoint(8,136), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX5"));
    CheckBox5->SetValue(false);
//    CheckBox5->Show(false);
    CheckBox5->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWTEXT));
    CheckBox7 = new wxCheckBox(Panel2, ID_CHECKBOX7, _("Incidence_Daily_each_Sim"), wxPoint(8,200), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX7"));
    CheckBox7->SetValue(false);
//    CheckBox7->Show(false);
    CheckBox7->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWTEXT));
    CheckBox12 = new wxCheckBox(Panel2, ID_CHECKBOX12, _("Incidence_Season_overall"), wxPoint(8,360), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX12"));
    CheckBox12->SetValue(false);
//    CheckBox12->Show(false);
    CheckBox12->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWTEXT));
    CheckBox11 = new wxCheckBox(Panel2, ID_CHECKBOX11, _("Outcomes_File"), wxPoint(8,392), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX11"));
    CheckBox11->SetValue(false);
//    CheckBox11->Show(false);
    CheckBox11->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWTEXT));
    CheckBox10 = new wxCheckBox(Panel2, ID_CHECKBOX10, _("Incidence_Monthly_overall"), wxPoint(8,328), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX10"));
    CheckBox10->SetValue(false);
//    CheckBox10->Show(false);
    CheckBox10->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWTEXT));
    CheckBox9 = new wxCheckBox(Panel2, ID_CHECKBOX9, _("Incidence_Daily_overall"), wxPoint(8,296), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX9"));
    CheckBox9->SetValue(false);
//    CheckBox9->Show(false);
    CheckBox9->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWTEXT));
    CheckBox8 = new wxCheckBox(Panel2, ID_CHECKBOX8, _("Incidence_Season_each_Sim"), wxPoint(8,264), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX8"));
    CheckBox8->SetValue(false);
//    CheckBox8->Show(false);
    CheckBox8->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWTEXT));
    CheckBox6 = new wxCheckBox(Panel2, ID_CHECKBOX6, _("Incidence_Monthly_each_Sim"), wxPoint(8,232), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX6"));
    CheckBox6->SetValue(false);
//    CheckBox6->Show(false);
    CheckBox6->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWTEXT));
    CheckBox1 = new wxCheckBox(Panel2, ID_CHECKBOX1, _("Prevalance"), wxPoint(8,168), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX1"));
    CheckBox1->SetValue(false);
//    CheckBox1->Show(false);
    CheckBox1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWTEXT));
    StaticLine2 = new wxStaticLine(Panel1, ID_STATICLINE2, wxPoint(412,192), wxSize(2,576), wxLI_HORIZONTAL, _T("ID_STATICLINE2"));
    StaticLine3 = new wxStaticLine(Panel1, ID_STATICLINE3, wxPoint(32,350), wxSize(344,2), wxLI_VERTICAL, _T("ID_STATICLINE3"));
    Panel3 = new wxPanel(Panel1, ID_PANEL3, wxPoint(32,196), wxSize(344,135), wxTAB_TRAVERSAL, _T(""));
    StaticText5 = new wxStaticText(Panel3, ID_STATICTEXT5, _("Vaccine type"), wxPoint(8,24), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    StaticText5->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWTEXT));
    RadioButton1 = new wxRadioButton(Panel3, ID_RADIOBUTTON1, _("All-or-none"), wxPoint(8,50), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON1"));
    RadioButton1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWTEXT));
    RadioButton2 = new wxRadioButton(Panel3, ID_RADIOBUTTON2, _("Leaky"), wxPoint(8,75), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON2"));
    RadioButton2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWTEXT));

    CheckBox13 = new wxCheckBox(Panel1, ID_CHECKBOX13, _("Add timestamp to output"), wxPoint(32,350), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX13"));
    CheckBox13->SetValue(false); 
//    CheckBox13->Show(false); 
    // wxScrolledWindow* scrl;
    // scrl = new wxScrolledWindow( Panel2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxVSCROLL );
    // scrl->SetScrollRate( 5, 5 );
    // wxBoxSizer* sizer = new wxBoxSizer( wxVERTICAL );
    // sizer->Add( scrl, 1, wxEXPAND | wxALL, 5 );
    // Panel2->SetSizer( sizer );
    // Panel2->Layout();
    // sizer->Fit( Panel2 );

    StaticText13 = new wxStaticText(Panel34, wxID_ANY, _("Initial number of infected persons"), wxPoint(0,0), wxDefaultSize, 0, "");
    TextCtrl6 = new wxTextCtrl(Panel34, wxID_ANY, wxEmptyString, wxPoint(280,0), wxSize(60,30), 0, wxTextValidator(wxFILTER_DIGITS,NULL), "");
    StaticLine4 = new wxStaticLine(Panel1, wxID_ANY, wxPoint(32,390), wxSize(344,2), wxLI_VERTICAL, "");
    StaticLine5 = new wxStaticLine(Panel1, wxID_ANY, wxPoint(32,410), wxSize(344,2), wxLI_VERTICAL, "");

    Panel4 = new wxPanel(Panel1, ID_PANEL4, wxPoint(32,120), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL4"));
    StaticText7 = new wxStaticText(Panel4, ID_STATICTEXT7, _("No. of simulations"), wxPoint(288,16), wxDefaultSize, 0, _T("ID_STATICTEXT7"));
    StaticText7->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWTEXT));
    StaticText7->SetToolTip(_("Number of simulations"));
    StaticText6 = new wxStaticText(Panel4, ID_STATICTEXT6, _("Seed"), wxPoint(566,16), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
    StaticText6->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWTEXT));
    TextCtrl4 = new wxTextCtrl(Panel4, ID_TEXTCTRL4, wxEmptyString, wxPoint(618,16), wxDefaultSize, 0, wxTextValidator(wxFILTER_DIGITS,NULL), _T("ID_TEXTCTRL4"));
    StaticText4 = new wxStaticText(Panel4, ID_STATICTEXT4, _("Title"), wxPoint(8,16), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    StaticText4->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWTEXT));
    StaticText4->SetToolTip(_("Simulation Name"));
    TextCtrl1 = new wxTextCtrl(Panel4, ID_TEXTCTRL1, wxEmptyString, wxPoint(52,16), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    StaticText3 = new wxStaticText(Panel4, ID_STATICTEXT3, _("First month of study"), wxPoint(740,16), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    StaticText3->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWTEXT));
    TextCtrl2 = new wxTextCtrl(Panel4, ID_TEXTCTRL2, _("YYYY"), wxPoint(908,16), wxDefaultSize, 0, wxTextValidator(wxFILTER_DIGITS,NULL), _T("ID_TEXTCTRL2"));
    SpinCtrl1 = new wxSpinCtrl(Panel4, ID_SPINCTRL1, _T("3"), wxPoint(1250,16), wxDefaultSize, 0, 1, 12, 3, _T("ID_SPINCTRL1"));
    SpinCtrl1->SetValue(_T("3"));
    StaticText9 = new wxStaticText(Panel4, ID_STATICTEXT9, _("No. of months"), wxPoint(1120,16), wxDefaultSize, 0, _T("ID_STATICTEXT9"));
    StaticText9->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWTEXT));
    StaticText9->SetToolTip(_("Number of months"));
    StaticText8 = new wxStaticText(Panel4, ID_STATICTEXT8, _("No. of strata"), wxPoint(1350,16), wxDefaultSize, 0, _T("ID_STATICTEXT8"));
    StaticText8->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWTEXT));
    StaticText8->SetToolTip(_("Number of Strata"));
    SpinCtrl3 = new wxSpinCtrl(Panel4, ID_SPINCTRL3, _T("4"), wxPoint(1470,16), wxDefaultSize, 0, 1, 6, 4, _T("ID_SPINCTRL3"));
    SpinCtrl3->SetValue(_T("4"));
    SpinCtrl4 = new wxSpinCtrl(Panel4, ID_SPINCTRL4, _("MM"), wxPoint(1022,16), wxDefaultSize, 0, 1, 12, 5, _T("ID_SPINCTRL4"));
    SpinCtrl4->SetValue(_("MM"));
    TextCtrl5 = new wxTextCtrl(Panel4, ID_TEXTCTRL5, wxEmptyString, wxPoint(442,16), wxDefaultSize, 0, wxTextValidator(wxFILTER_DIGITS,NULL), _T("ID_TEXTCTRL5"));

    Panel5 = new wxPanel(Panel1, ID_PANEL5, wxPoint(430,192), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL5"));
    Notebook1 = new wxNotebook(Panel5, ID_NOTEBOOK1, wxPoint(0,0), wxSize(1080,684), 0, _T("ID_NOTEBOOK1"));
    Panel6 = new wxPanel(Notebook1, ID_PANEL6, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL6"));
    Grid1 = new wxGrid(Panel6, ID_GRID1, wxPoint(8,8), wxSize(850,620), 0, _T("ID_GRID1"));
    Grid1->CreateGrid(4,4);
    Grid1->SetRowLabelSize(200);
    Grid1->SetLabelBackgroundColour("white");
    Grid1->SetRowLabelAlignment(wxALIGN_LEFT,wxALIGN_CENTRE);
    Grid1->SetColLabelAlignment(wxALIGN_LEFT,wxALIGN_CENTRE);
    //Grid1->SetDefaultEditor(wxGridCellFloatEditor);
    Grid1->EnableEditing(true);
    Grid1->EnableGridLines(true);
    Grid1->SetColLabelValue(0, _("Stratum 1"));
    Grid1->SetColLabelValue(1, _("Stratum 2"));
    Grid1->SetColLabelValue(2, _("Stratum 3"));
    Grid1->SetColLabelValue(3, _("Stratum 4"));
    Grid1->SetDefaultColSize(100);
    Grid1->SetRowLabelValue(0, _("Size"));
    Grid1->SetRowLabelValue(1, _("Prob(X=1)"));
    Grid1->SetRowLabelValue(2, _("Prob(U=1|X=0)"));
    Grid1->SetRowLabelValue(3, _("Prob(U=1|X=1)"));
    Grid1->SetDefaultCellFont( Grid1->GetFont() );
    Grid1->SetDefaultCellTextColour( Grid1->GetForegroundColour() );
    Panel7 = new wxPanel(Notebook1, ID_PANEL7, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL7"));
    Grid2 = new wxGrid(Panel7, ID_GRID2, wxPoint(8,8), wxSize(850,620), 0, _T("ID_GRID2"));
    Grid2->CreateGrid(6,4);
    Grid2->SetRowLabelSize(250);
    Grid2->SetLabelBackgroundColour("white");
    Grid2->SetRowLabelAlignment(wxALIGN_LEFT,wxALIGN_CENTRE);
    Grid2->SetColLabelAlignment(wxALIGN_LEFT,wxALIGN_CENTRE);
    Grid2->EnableEditing(true);
    Grid2->EnableGridLines(true);
    Grid2->SetColLabelValue(0, _("Stratum 1"));
    Grid2->SetColLabelValue(1, _("Stratum 2"));
    Grid2->SetColLabelValue(2, _("Stratum 3"));
    Grid2->SetColLabelValue(3, _("Stratum 4"));
    Grid2->SetDefaultColSize(100);
    Grid2->SetRowLabelValue(0, _("Month 0"));
    Grid2->SetRowLabelValue(1, _("Month 1"));
    Grid2->SetRowLabelValue(2, _("Month 2"));
    Grid2->SetRowLabelValue(3, _("Month 3"));
    Grid2->SetRowLabelValue(4, _("Multiplyer for X=0"));
    Grid2->SetRowLabelValue(5, _("Multiplyer for U=0"));
    Grid2->SetDefaultCellFont( Grid2->GetFont() );
    Grid2->SetDefaultCellTextColour( Grid2->GetForegroundColour() );
    Panel8 = new wxPanel(Notebook1, ID_PANEL8, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL8"));
    Grid3 = new wxGrid(Panel8, ID_GRID3, wxPoint(8,8), wxSize(850,620), 0, _T("ID_GRID3"));
    Grid3->CreateGrid(5,4);
    Grid3->SetRowLabelSize(300);
    Grid3->SetLabelBackgroundColour("white");
    Grid3->SetRowLabelAlignment(wxALIGN_LEFT,wxALIGN_CENTRE);
    Grid3->SetColLabelAlignment(wxALIGN_LEFT,wxALIGN_CENTRE);
    Grid3->EnableEditing(true);
    Grid3->EnableGridLines(true);
    Grid3->SetColLabelValue(0, _("Stratum 1"));
    Grid3->SetColLabelValue(1, _("Stratum 2"));
    Grid3->SetColLabelValue(2, _("Stratum 3"));
    Grid3->SetColLabelValue(3, _("Stratum 4"));
    Grid3->SetDefaultColSize(100);
    Grid3->SetRowLabelValue(0, _("Stratum 1"));
    Grid3->SetRowLabelValue(1, _("Stratum 2"));
    Grid3->SetRowLabelValue(2, _("Stratum 3"));
    Grid3->SetRowLabelValue(3, _("Stratum 4"));
    Grid3->SetRowLabelValue(4, _("Number of contact per day"));
    Grid3->SetDefaultCellFont( Grid3->GetFont() );
    Grid3->SetDefaultCellTextColour( Grid3->GetForegroundColour() );
    Panel9 = new wxPanel(Notebook1, ID_PANEL9, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL9"));
    Grid4 = new wxGrid(Panel9, ID_GRID4, wxPoint(8,8), wxSize(850,620), 0, _T("ID_GRID4"));
    Grid4->CreateGrid(4,4);
    Grid4->SetRowLabelSize(350);
    Grid4->SetLabelBackgroundColour("white");
    Grid4->SetRowLabelAlignment(wxALIGN_LEFT,wxALIGN_CENTRE);
    Grid4->SetColLabelAlignment(wxALIGN_LEFT,wxALIGN_CENTRE);
    Grid4->EnableEditing(true);
    Grid4->EnableGridLines(true);
    Grid4->SetColLabelValue(0, _("Stratum 1"));
    Grid4->SetColLabelValue(1, _("Stratum 2"));
    Grid4->SetColLabelValue(2, _("Stratum 3"));
    Grid4->SetColLabelValue(3, _("Stratum 4"));
    Grid4->SetDefaultColSize(100);
//    Grid4->SetRowLabelValue(0, _("Initial number of infected persons"));
    Grid4->SetRowLabelValue(0, _("Length of latent period"));
    Grid4->SetRowLabelValue(1, _("Length of infectious period"));
    Grid4->SetRowLabelValue(2, _("Probability of illness given infection"));
    Grid4->SetRowLabelValue(3, _("Relative infectiousness if not ill"));
    Grid4->SetDefaultCellFont( Grid4->GetFont() );
    Grid4->SetDefaultCellTextColour( Grid4->GetForegroundColour() );
    Panel10 = new wxPanel(Notebook1, ID_PANEL10, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL10"));
    Grid5 = new wxGrid(Panel10, ID_GRID5, wxPoint(8,8), wxSize(850,620), 0, _T("ID_GRID5"));
    Grid5->CreateGrid(4,4);
    Grid5->SetRowLabelSize(250);
    Grid5->SetLabelBackgroundColour("white");
    Grid5->SetRowLabelAlignment(wxALIGN_LEFT,wxALIGN_CENTRE);
    Grid5->SetColLabelAlignment(wxALIGN_LEFT,wxALIGN_CENTRE);
    Grid5->EnableEditing(true);
    Grid5->EnableGridLines(true);
    Grid5->SetColLabelValue(0, _("Stratum 1"));
    Grid5->SetColLabelValue(1, _("Stratum 2"));
    Grid5->SetColLabelValue(2, _("Stratum 3"));
    Grid5->SetColLabelValue(3, _("Stratum 4"));
    Grid5->SetDefaultColSize(100);
    Grid5->SetRowLabelValue(0, _("Month 1"));
    Grid5->SetRowLabelValue(1, _("Month 2"));
    Grid5->SetRowLabelValue(2, _("Month 3"));
    Grid5->SetRowLabelValue(3, _("Multiplyer for X=0"));
    Grid5->SetDefaultCellFont( Grid5->GetFont() );
    Grid5->SetDefaultCellTextColour( Grid5->GetForegroundColour() );
    Panel11 = new wxPanel(Notebook1, ID_PANEL11, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL11"));
    Grid6 = new wxGrid(Panel11, ID_GRID6, wxPoint(8,8), wxSize(850,620), 0, _T("ID_GRID6"));
    Grid6->CreateGrid(4,4);
    Grid6->SetRowLabelSize(250);
    Grid6->SetLabelBackgroundColour("white");
    Grid6->SetRowLabelAlignment(wxALIGN_LEFT,wxALIGN_CENTRE);
    Grid6->SetColLabelAlignment(wxALIGN_LEFT,wxALIGN_CENTRE);
    Grid6->EnableEditing(true);
    Grid6->EnableGridLines(true);
    Grid6->SetColLabelValue(0, _("Stratum 1"));
    Grid6->SetColLabelValue(1, _("Stratum 2"));
    Grid6->SetColLabelValue(2, _("Stratum 3"));
    Grid6->SetColLabelValue(3, _("Stratum 4"));
    Grid6->SetDefaultColSize(100);
    Grid6->SetRowLabelValue(0, _("Month 1"));
    Grid6->SetRowLabelValue(1, _("Month 2"));
    Grid6->SetRowLabelValue(2, _("Month 3"));
    Grid6->SetRowLabelValue(3, _("Multiplyer for X=0"));
    Grid6->SetDefaultCellFont( Grid6->GetFont() );
    Grid6->SetDefaultCellTextColour( Grid6->GetForegroundColour() );
    Panel12 = new wxPanel(Notebook1, ID_PANEL12, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL12"));
    Grid7 = new wxGrid(Panel12, ID_GRID7, wxPoint(8,8), wxSize(850,620), 0, _T("ID_GRID7"));
    Grid7->CreateGrid(6,4);
    Grid7->SetRowLabelSize(450);
    Grid7->SetLabelBackgroundColour("white");
    Grid7->SetRowLabelAlignment(wxALIGN_LEFT,wxALIGN_CENTRE);
    Grid7->SetColLabelAlignment(wxALIGN_LEFT,wxALIGN_CENTRE);
    Grid7->EnableEditing(true);
    Grid7->EnableGridLines(true);
    Grid7->SetColLabelValue(0, _("Stratum 1"));
    Grid7->SetColLabelValue(1, _("Stratum 2"));
    Grid7->SetColLabelValue(2, _("Stratum 3"));
    Grid7->SetColLabelValue(3, _("Stratum 4"));
    Grid7->SetDefaultColSize(100);
    Grid7->SetRowLabelValue(0, _("Length of NFARI episode"));
    Grid7->SetRowLabelValue(1, _("Daily probabilities of onset of NFARI (month  1)"));
    Grid7->SetRowLabelValue(2, _("Daily probabilities of onset of NFARI (month  2)"));
    Grid7->SetRowLabelValue(3, _("Daily probabilities of onset of NFARI (month  3)"));
    Grid7->SetRowLabelValue(4, _("Daily NFARI probabilities multipliers for \nvaccinated or protected person"));
    Grid7->SetRowLabelValue(5, _("Daily NFARI probabilities multipliers for X=0"));
    Grid7->SetDefaultCellFont( Grid7->GetFont() );
    Grid7->SetDefaultCellTextColour( Grid7->GetForegroundColour() );
    Grid7->AutoSizeRowLabelSize(4);
    Panel27 = new wxPanel(Notebook1, ID_PANEL27, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL27"));
    Grid20 = new wxGrid(Panel27, ID_GRID20, wxPoint(8,8), wxSize(850,620), 0, _T("ID_GRID20"));
    Grid20->CreateGrid(8,4);
    Grid20->SetRowLabelSize(450);
    Grid20->SetLabelBackgroundColour("white");
    Grid20->SetRowLabelAlignment(wxALIGN_LEFT,wxALIGN_CENTRE);
    Grid20->SetColLabelAlignment(wxALIGN_LEFT,wxALIGN_CENTRE);
    Grid20->EnableEditing(true);
    Grid20->EnableGridLines(true);
    Grid20->SetColLabelValue(0, _("Stratum 1"));
    Grid20->SetColLabelValue(1, _("Stratum 2"));
    Grid20->SetColLabelValue(2, _("Stratum 3"));
    Grid20->SetColLabelValue(3, _("Stratum 4"));
    Grid20->SetDefaultColSize(100);
    Grid20->SetRowLabelValue(0, _("Probability of visit for a case of FARI \nunvaccinated or unprotected and X=1, U=1"));
    Grid20->SetRowLabelValue(1, _("Multiplier for vaccinated case (FARI)"));
    Grid20->SetRowLabelValue(2, _("Multiplier for X=0 case (FARI)"));
    Grid20->SetRowLabelValue(3, _("Multiplier for U=0 case (FARI)"));
    Grid20->SetRowLabelValue(4, _("Probability of visit for a case of NFARI \nunvaccinated or unprotected and X=1, U=1"));
    Grid20->SetRowLabelValue(5, _("Multiplier for vaccinated case (NFARI)"));
    Grid20->SetRowLabelValue(6, _("Multiplier for X=0 case (NFARI)"));
    Grid20->SetRowLabelValue(7, _("Multiplier for U=0 case (NFARI)"));
    Grid20->SetDefaultCellFont( Grid20->GetFont() );
    Grid20->SetDefaultCellTextColour( Grid20->GetForegroundColour() );
    for (int i=0;i<8;i++) Grid20->AutoSizeRowLabelSize(i);
//    Panel13 = new wxPanel(Notebook1, ID_PANEL13, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL13"));
//    TextCtrl3 = new wxTextCtrl(Panel13, ID_TEXTCTRL3, wxEmptyString, wxPoint(0,0), wxSize(850,520), wxTE_MULTILINE|wxTE_READONLY|wxNO_BORDER, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    Notebook1->AddPage(Panel6, _("Strata"), false);
    Notebook1->AddPage(Panel7, _("Vac Cov"), false);
    Notebook1->AddPage(Panel8, _("Contacts"), false);
    Notebook1->AddPage(Panel9, _("Flu Params"), false);
    Notebook1->AddPage(Panel10, _("Trans Prob"), false);
    Notebook1->AddPage(Panel11, _("Vac Efficacy"), false);
    Notebook1->AddPage(Panel12, _("NFARI"), false);
    Notebook1->AddPage(Panel27, _("Visit"), false);
//    Notebook1->AddPage(Panel13, _("Console"), false);
    Panel28 = new wxPanel(Panel1, ID_PANEL28, wxPoint(1418,256), wxSize(200,500), wxTAB_TRAVERSAL, _T("ID_PANEL28"));
    Panel29 = new wxPanel(Panel28, ID_PANEL29, wxPoint(100,0), wxSize(200,500), wxTAB_TRAVERSAL, _T("ID_PANEL29"));
 
    Button1 = new wxButton(Panel29, ID_BUTTON1, _("LOAD INPUT FILE"), wxPoint(0,0), wxSize(116,40), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button1->SetToolTip(_("Load input parameters"));
    Button2 = new wxButton(Panel29, ID_BUTTON2, _("SAVE INPUT FILE"), wxPoint(0,400), wxSize(116,40), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    Button2->SetToolTip(_("Save input parameters"));
    Button3 = new wxButton(Panel29, ID_BUTTON3, _("RUN"), wxPoint(0,100), wxSize(116,40), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    Button3->SetToolTip(_("Start simulations"));
    Button4 = new wxButton(Panel29, ID_BUTTON4, _("VIEW OUTPUTS"), wxPoint(0,300), wxSize(116,40), 0, wxDefaultValidator, _T("ID_BUTTON4"));
    Button4->SetToolTip(_("View output data"));
//    StaticText10 = new wxStaticText(Panel28, ID_STATICTEXT10, _("Output Files SavePath"), wxPoint(0,0), wxDefaultSize, 0, _T("ID_STATICTEXT10"));
//    DirPickerCtrl1 = new wxDirPickerCtrl(Panel28, wxID_ANY, wxEmptyString,wxDirDialogNameStr, wxPoint(50,0), wxDefaultSize);

	//  Button5 = new wxButton(Panel29, ID_BUTTON5, _("CANCEL"), wxPoint(0,200), wxSize(116,40), 0, wxDefaultValidator, _T("ID_BUTTON5"));
//    Button5->SetToolTip(_("Cancel simulations"));
    Button6 = new wxButton(Panel2, ID_BUTTON6, _("MORE"), wxPoint(100,260), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON6"));
    Button6->SetToolTip(_("Expand output files list"));
    Button7 = new wxButton(Panel2, ID_BUTTON7, _("LESS"), wxPoint(100,360), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON7"));
    Button7->SetToolTip(_("Shrink output files list"));
    Panel14 = new wxPanel(Notebook2, ID_PANEL14, wxDefaultPosition, wxSize(2000,1000), wxTAB_TRAVERSAL, _T("ID_PANEL14"));
    Panel14->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWTEXT));
    Notebook3 = new wxNotebook(Panel14, ID_NOTEBOOK3, wxPoint(0,0), wxSize(2000,1000), 0, _T("ID_NOTEBOOK3"));
    Notebook3->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWTEXT));
    Panel15 = new wxPanel(Notebook3, ID_PANEL15, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL15"));
    Panel15->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_SCROLLBAR));
    Grid8 = new wxGrid(Panel15, ID_GRID8, wxPoint(0,0), wxSize(1900,870), wxHSCROLL, _T("ID_GRID8"));
    Grid8->CreateGrid(1,2);
    Grid8->HideColLabels ();
    Grid8->EnableEditing(false);
    Grid8->EnableGridLines(true);
    Grid8->SetDefaultColSize(300, true);
    Grid8->SetDefaultCellFont( Grid8->GetFont() );
    Grid8->SetDefaultCellTextColour( Grid8->GetForegroundColour() );
    Panel16 = new wxPanel(Notebook3, ID_PANEL16, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL16"));
    Panel16->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_SCROLLBAR));
    Grid9 = new wxGrid(Panel16, ID_GRID9, wxPoint(0,0), wxSize(1900,870), wxVSCROLL | wxHSCROLL, _T("ID_GRID9"));
    Grid9->CreateGrid(1,9);
    Grid9->EnableEditing(false);
    Grid9->EnableGridLines(true);
    Grid9->SetColLabelValue(0, _("S"));
    Grid9->SetColLabelValue(1, _("M"));
    Grid9->SetColLabelValue(2, _("Month"));
    Grid9->SetColLabelValue(3, _("Year"));
    Grid9->SetColLabelValue(4, _("K"));
    Grid9->SetColLabelValue(5, _("X"));
    Grid9->SetColLabelValue(6, _("Y"));
    Grid9->SetColLabelValue(7, _("Number of Newly Vaccinated"));
    Grid9->SetColLabelValue(8, _("Newly Vaccinated"));
    Grid9->SetDefaultCellFont( Grid9->GetFont() );
    Grid9->SetDefaultCellTextColour( Grid9->GetForegroundColour() );
    Panel17 = new wxPanel(Notebook3, ID_PANEL17, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL17"));
    Panel17->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_SCROLLBAR));
    Grid10 = new wxGrid(Panel17, ID_GRID10, wxPoint(0,0), wxSize(1900,870), wxVSCROLL | wxHSCROLL, _T("ID_GRID10"));
    Grid10->CreateGrid(1,16);
    Grid10->EnableEditing(false);
    Grid10->EnableGridLines(true);
    Grid10->SetColLabelValue(0, _("S"));
    Grid10->SetColLabelValue(1, _("D"));
    Grid10->SetColLabelValue(2, _("Day"));
    Grid10->SetColLabelValue(3, _("Month"));
    Grid10->SetColLabelValue(4, _("Year"));
    Grid10->SetColLabelValue(5, _("I"));
    Grid10->SetColLabelValue(6, _("Stratum"));
    Grid10->SetColLabelValue(7, _("X"));
    Grid10->SetColLabelValue(8, _("Y"));
    Grid10->SetColLabelValue(9, _("InitInf"));
    Grid10->SetColLabelValue(10, _("Vac"));
    Grid10->SetColLabelValue(11, _("Protected"));
    Grid10->SetColLabelValue(12, _("State"));
    Grid10->SetColLabelValue(13, _("DayInf"));
    Grid10->SetColLabelValue(14, _("DNFARI"));
    Grid10->SetColLabelValue(15, _("Visit"));
    Grid10->SetDefaultCellFont( Grid10->GetFont() );
    Grid10->SetDefaultCellTextColour( Grid10->GetForegroundColour() );
    Panel18 = new wxPanel(Notebook3, ID_PANEL18, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL18"));
    Panel18->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_SCROLLBAR));
    Grid11 = new wxGrid(Panel18, ID_GRID11, wxPoint(0,0), wxSize(1900,870), wxVSCROLL | wxHSCROLL, _T("ID_GRID11"));
    Grid11->CreateGrid(1,11);
    Grid11->EnableEditing(false);
    Grid11->EnableGridLines(true);
    Grid11->SetColLabelValue(0, _("S"));
    Grid11->SetColLabelValue(1, _("D"));
    Grid11->SetColLabelValue(2, _("I"));
    Grid11->SetColLabelValue(3, _("Stratum"));
    Grid11->SetColLabelValue(4, _("X"));
    Grid11->SetColLabelValue(5, _("Y"));
    Grid11->SetColLabelValue(6, _("Vac"));
    Grid11->SetColLabelValue(7, _("Protected"));
    Grid11->SetColLabelValue(8, _("P(INF)"));
    Grid11->SetColLabelValue(9, _("RANDOM"));
    Grid11->SetColLabelValue(10, _("NewInf"));
    Grid11->SetDefaultCellFont( Grid11->GetFont() );
    Grid11->SetDefaultCellTextColour( Grid11->GetForegroundColour() );
    Panel19 = new wxPanel(Notebook3, ID_PANEL19, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL19"));
    Grid12 = new wxGrid(Panel19, ID_GRID12, wxPoint(0,0), wxSize(1900,870), wxVSCROLL | wxHSCROLL, _T("ID_GRID12"));
    Grid12->CreateGrid(1,12);
    Grid12->EnableEditing(false);
    Grid12->EnableGridLines(true);
    Grid12->SetColLabelValue(0, _("S"));
    Grid12->SetColLabelValue(1, _("D"));
    Grid12->SetColLabelValue(2, _("Day"));
    Grid12->SetColLabelValue(3, _("Month"));
    Grid12->SetColLabelValue(4, _("Year"));
    Grid12->SetColLabelValue(5, _("Stratum"));
    Grid12->SetColLabelValue(6, _("Prevalence(S2)"));
    Grid12->SetColLabelValue(7, _("Prevalence(S3)"));
    Grid12->SetColLabelValue(8, _("P(INF|V=0;X=0)"));
    Grid12->SetColLabelValue(9, _("P(INF|V=0;X=1)"));
    Grid12->SetColLabelValue(10, _("P(INF|V=1;X=0)"));
    Grid12->SetColLabelValue(11, _("P(INF|V=1;X=1)"));
    Grid12->SetDefaultCellFont( Grid12->GetFont() );
    Grid12->SetDefaultCellTextColour( Grid12->GetForegroundColour() );
    Panel20 = new wxPanel(Notebook3, ID_PANEL20, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL20"));
    Grid13 = new wxGrid(Panel20, ID_GRID13, wxPoint(0,0), wxSize(1900,870), wxVSCROLL | wxHSCROLL, _T("ID_GRID13"));
    Grid13->CreateGrid(1,16);
    Grid13->EnableEditing(false);
    Grid13->EnableGridLines(true);
    Grid13->SetColLabelValue(0, _("S"));
    Grid13->SetColLabelValue(1, _("D"));
    Grid13->SetColLabelValue(2, _("Day"));
    Grid13->SetColLabelValue(3, _("Month"));
    Grid13->SetColLabelValue(4, _("Year"));
    Grid13->SetColLabelValue(5, _("Stratum"));
    Grid13->SetColLabelValue(6, _("V"));
    Grid13->SetColLabelValue(7, _("N"));
    Grid13->SetColLabelValue(8, _("Inc2"));
    Grid13->SetColLabelValue(9, _("Rate2"));
    Grid13->SetColLabelValue(10, _("Inc3"));
    Grid13->SetColLabelValue(11, _("Rate3"));
    Grid13->SetColLabelValue(12, _("IncT"));
    Grid13->SetColLabelValue(13, _("RateT"));
    Grid13->SetColLabelValue(14, _("IncNFARI"));
    Grid13->SetColLabelValue(15, _("RateNFARI"));
    Grid13->SetDefaultCellFont( Grid13->GetFont() );
    Grid13->SetDefaultCellTextColour( Grid13->GetForegroundColour() );
    Panel21 = new wxPanel(Notebook3, ID_PANEL21, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL21"));
    Grid14 = new wxGrid(Panel21, ID_GRID14, wxPoint(0,0), wxSize(1900,870), wxVSCROLL | wxHSCROLL, _T("ID_GRID14"));
    Grid14->CreateGrid(1,14);
    Grid14->EnableEditing(false);
    Grid14->EnableGridLines(true);
    Grid14->SetColLabelValue(0, _("S"));
    Grid14->SetColLabelValue(1, _("Month"));
    Grid14->SetColLabelValue(2, _("Year"));
    Grid14->SetColLabelValue(3, _("Stratum"));
    Grid14->SetColLabelValue(4, _("V"));
    Grid14->SetColLabelValue(5, _("N"));
    Grid14->SetColLabelValue(6, _("Inc2"));
    Grid14->SetColLabelValue(7, _("Rate2"));
    Grid14->SetColLabelValue(8, _("Inc3"));
    Grid14->SetColLabelValue(9, _("Rate3"));
    Grid14->SetColLabelValue(10, _("IncT"));
    Grid14->SetColLabelValue(11, _("RateT"));
    Grid14->SetColLabelValue(12, _("IncNFARI"));
    Grid14->SetColLabelValue(13, _("RateNFARI"));
    Grid14->SetDefaultCellFont( Grid14->GetFont() );
    Grid14->SetDefaultCellTextColour( Grid14->GetForegroundColour() );
    Panel22 = new wxPanel(Notebook3, ID_PANEL22, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL22"));
    Grid15 = new wxGrid(Panel22, ID_GRID15, wxPoint(0,0), wxSize(1900,870), wxVSCROLL | wxHSCROLL, _T("ID_GRID15"));
    Grid15->CreateGrid(1,12);
    Grid15->EnableEditing(false);
    Grid15->EnableGridLines(true);
    Grid15->SetColLabelValue(0, _("S"));
    Grid15->SetColLabelValue(1, _("Stratum"));
    Grid15->SetColLabelValue(2, _("V"));
    Grid15->SetColLabelValue(3, _("N"));
    Grid15->SetColLabelValue(4, _("Inc2"));
    Grid15->SetColLabelValue(5, _("Rate2"));
    Grid15->SetColLabelValue(6, _("Inc3"));
    Grid15->SetColLabelValue(7, _("Rate3"));
    Grid15->SetColLabelValue(8, _("IncT"));
    Grid15->SetColLabelValue(9, _("RateT"));
    Grid15->SetColLabelValue(10, _("IncNFARI"));
    Grid15->SetColLabelValue(11, _("RateNFARI"));
    Grid15->SetDefaultCellFont( Grid15->GetFont() );
    Grid15->SetDefaultCellTextColour( Grid15->GetForegroundColour() );
    Panel23 = new wxPanel(Notebook3, ID_PANEL23, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL23"));
    Grid16 = new wxGrid(Panel23, ID_GRID16, wxPoint(0,0), wxSize(1900,870), wxVSCROLL | wxHSCROLL, _T("ID_GRID16"));
    Grid16->CreateGrid(1,15);
    Grid16->EnableEditing(false);
    Grid16->EnableGridLines(true);
    Grid16->SetColLabelValue(0, _("D"));
    Grid16->SetColLabelValue(1, _("Day"));
    Grid16->SetColLabelValue(2, _("Month"));
    Grid16->SetColLabelValue(3, _("Year"));
    Grid16->SetColLabelValue(4, _("Stratum"));
    Grid16->SetColLabelValue(5, _("V"));
    Grid16->SetColLabelValue(6, _("N"));
    Grid16->SetColLabelValue(7, _("Inc2"));
    Grid16->SetColLabelValue(8, _("Rate2"));
    Grid16->SetColLabelValue(9, _("Inc3"));
    Grid16->SetColLabelValue(10, _("Rate3"));
    Grid16->SetColLabelValue(11, _("IncT"));
    Grid16->SetColLabelValue(12, _("RateT"));
    Grid16->SetColLabelValue(13, _("IncNFARI"));
    Grid16->SetColLabelValue(14, _("RateNFARI"));
    Grid16->SetDefaultCellFont( Grid16->GetFont() );
    Grid16->SetDefaultCellTextColour( Grid16->GetForegroundColour() );
    Panel24 = new wxPanel(Notebook3, ID_PANEL24, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL24"));
    Grid17 = new wxGrid(Panel24, ID_GRID17, wxPoint(0,0), wxSize(1900,870), wxVSCROLL | wxHSCROLL, _T("ID_GRID17"));
    Grid17->CreateGrid(1,13);
    Grid17->EnableEditing(false);
    Grid17->EnableGridLines(true);
    Grid17->SetColLabelValue(0, _("Month"));
    Grid17->SetColLabelValue(1, _("Year"));
    Grid17->SetColLabelValue(2, _("Stratum"));
    Grid17->SetColLabelValue(3, _("V"));
    Grid17->SetColLabelValue(4, _("N"));
    Grid17->SetColLabelValue(5, _("Inc2"));
    Grid17->SetColLabelValue(6, _("Rate2"));
    Grid17->SetColLabelValue(7, _("Inc3"));
    Grid17->SetColLabelValue(8, _("Rate3"));
    Grid17->SetColLabelValue(9, _("IncT"));
    Grid17->SetColLabelValue(10, _("RateT"));
    Grid17->SetColLabelValue(11, _("IncNFARI"));
    Grid17->SetColLabelValue(12, _("RateNFARI"));
    Grid17->SetDefaultCellFont( Grid17->GetFont() );
    Grid17->SetDefaultCellTextColour( Grid17->GetForegroundColour() );
    Panel25 = new wxPanel(Notebook3, ID_PANEL25, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL25"));
    Grid18 = new wxGrid(Panel25, ID_GRID18, wxPoint(0,0), wxSize(1900,870), wxVSCROLL | wxHSCROLL, _T("ID_GRID18"));
    Grid18->CreateGrid(1,11);
    Grid18->EnableEditing(false);
    Grid18->EnableGridLines(true);
    Grid18->SetColLabelValue(0, _("Stratum"));
    Grid18->SetColLabelValue(1, _("V"));
    Grid18->SetColLabelValue(2, _("N"));
    Grid18->SetColLabelValue(3, _("Inc2"));
    Grid18->SetColLabelValue(4, _("Rate2"));
    Grid18->SetColLabelValue(5, _("Inc3"));
    Grid18->SetColLabelValue(6, _("Rate3"));
    Grid18->SetColLabelValue(7, _("IncT"));
    Grid18->SetColLabelValue(8, _("RateT"));
    Grid18->SetColLabelValue(9, _("IncNFARI"));
    Grid18->SetColLabelValue(10, _("RateNFARI"));
    Grid18->SetDefaultCellFont( Grid18->GetFont() );
    Grid18->SetDefaultCellTextColour( Grid18->GetForegroundColour() );
    Panel26 = new wxPanel(Notebook3, ID_PANEL26, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL26"));
    Grid19 = new wxGrid(Panel26, ID_GRID19, wxPoint(0,0), wxSize(1900,870), wxVSCROLL | wxHSCROLL, _T("ID_GRID19"));
    Grid19->CreateGrid(1,13);
    Grid19->EnableEditing(false);
    Grid19->EnableGridLines(true);
    Grid19->SetColLabelValue(0, _("Sim"));
    Grid19->SetColLabelValue(1, _("Person"));
    Grid19->SetColLabelValue(2, _("STR"));
    Grid19->SetColLabelValue(3, _("X"));
    Grid19->SetColLabelValue(4, _("Y"));
    Grid19->SetColLabelValue(5, _("INITINF"));
    Grid19->SetColLabelValue(6, _("DEFVAC"));
    Grid19->SetColLabelValue(7, _("Protected"));
    Grid19->SetColLabelValue(8, _("EventCounter"));
    Grid19->SetColLabelValue(9, _("Type"));
    Grid19->SetColLabelValue(10, _("OnsetDay"));
    Grid19->SetColLabelValue(11, _("VacStatus"));
    Grid19->SetColLabelValue(12, _("Visit"));
    Grid19->SetDefaultCellFont( Grid19->GetFont() );
    Grid19->SetDefaultCellTextColour( Grid19->GetForegroundColour() );
    Panel15->Show(false);
    Panel16->Show(false);
    Panel17->Show(false);
    Panel18->Show(false);
    Panel19->Show(false);
    Panel20->Show(false);
    Panel21->Show(false);
    Panel22->Show(false);
    Panel23->Show(false);
    Panel24->Show(false);
    Panel25->Show(false);
    Panel26->Show(false);

    wxBoxSizer* hbox4 = new wxBoxSizer(wxHORIZONTAL);
    hbox4->Add(StaticText4,0, wxALL | wxEXPAND, 5);
    hbox4->Add(TextCtrl1,1, wxALL | wxEXPAND, 5);
    hbox4->Add(StaticText7,0, wxALL | wxEXPAND, 5);
    hbox4->Add(TextCtrl5,1, wxALL | wxEXPAND, 5);
    hbox4->Add(StaticText6,0, wxALL | wxEXPAND, 5);
    hbox4->Add(TextCtrl4,1, wxALL | wxEXPAND, 5);
    hbox4->Add(StaticText3,0, wxALL | wxEXPAND, 5);
    hbox4->Add(TextCtrl2,1, wxALL | wxEXPAND, 5);
    hbox4->Add(SpinCtrl4,0, wxALL | wxEXPAND, 5);
    hbox4->Add(StaticText9,0, wxALL | wxEXPAND, 5);
    hbox4->Add(SpinCtrl1,0, wxALL | wxEXPAND, 5);
    hbox4->Add(StaticText8,0, wxALL | wxEXPAND, 5);
    hbox4->Add(SpinCtrl3,0, wxALL | wxEXPAND, 5);
    Panel4->SetSizer(hbox4);

    hbox2 = new wxBoxSizer(wxVERTICAL);


    hbox2->Add(StaticText1,0, wxTOP | wxBOTTOM | wxEXPAND | wxALIGN_TOP, 5);
    hbox2->Add(CheckBox2,0, wxTOP | wxBOTTOM | wxEXPAND | wxALIGN_TOP, 5);
    hbox2->Add(Panel30);
   hbox2->Add(CheckBox3,0, wxTOP | wxBOTTOM | wxEXPAND | wxALIGN_TOP, 5);
   hbox2->Add(CheckBox4,0, wxTOP | wxBOTTOM | wxEXPAND | wxALIGN_TOP, 5);
   hbox2->Add(CheckBox5,0, wxTOP | wxBOTTOM | wxEXPAND | wxALIGN_TOP, 5);
   hbox2->Add(CheckBox1,0, wxTOP | wxBOTTOM | wxEXPAND | wxALIGN_TOP, 5);
   hbox2->Add(CheckBox7,0, wxTOP | wxBOTTOM | wxEXPAND | wxALIGN_TOP, 5);
   hbox2->Add(CheckBox6,0, wxTOP | wxBOTTOM | wxEXPAND | wxALIGN_TOP, 5);
   hbox2->Add(CheckBox8,0, wxTOP | wxBOTTOM | wxEXPAND | wxALIGN_TOP, 5);
    hbox2->Add(CheckBox9,0, wxTOP | wxBOTTOM | wxEXPAND | wxALIGN_TOP, 5);
    hbox2->Add(Panel31);
    hbox2->Add(CheckBox10,0, wxTOP | wxBOTTOM | wxEXPAND | wxALIGN_TOP, 5);
    hbox2->Add(Panel32);
    hbox2->Add(CheckBox12,0, wxTOP | wxBOTTOM | wxEXPAND | wxALIGN_TOP, 5);
    hbox2->Add(Panel33);
    hbox2->Add(CheckBox11,0, wxTOP | wxBOTTOM | wxEXPAND | wxALIGN_TOP, 5);
    hbox2->Add(Button6,0, wxALIGN_CENTER | wxTOP | wxBOTTOM | wxALIGN_TOP, 5);  
    hbox2->Add(Button7,0, wxALIGN_CENTER | wxTOP | wxBOTTOM | wxALIGN_TOP, 5); 
   hbox2->Hide(CheckBox3);
   hbox2->Hide(CheckBox4);
   hbox2->Hide(CheckBox5);
   hbox2->Hide(CheckBox1);
   hbox2->Hide(CheckBox7);
   hbox2->Hide(CheckBox6);
   hbox2->Hide(CheckBox8);
   hbox2->Hide(CheckBox11);
   hbox2->Hide(Button7);

    Panel2->SetSizer(hbox2);
    Panel2->FitInside();
    Panel2->SetScrollRate(5, 5);

    wxBoxSizer* hbox3 = new wxBoxSizer(wxVERTICAL);
    hbox3->Add(StaticText5,0, wxTOP | wxBOTTOM , 10);
    hbox3->Add(RadioButton1,0, wxTOP | wxBOTTOM , 10);
    hbox3->Add(RadioButton2,0, wxTOP | wxBOTTOM , 10);
    Panel3->SetSizer(hbox3);   
    Panel3->Fit();

    wxBoxSizer* hbox5 = new wxBoxSizer(wxVERTICAL);
    hbox5->Add(Notebook1,1, wxALL | wxEXPAND, 5);  
    Panel5->SetSizer(hbox5);  

    wxBoxSizer* hbox29 = new wxBoxSizer(wxVERTICAL);
//    hbox29->Add(CheckBox13,0, wxLEFT | wxRIGHT | wxEXPAND | wxALIGN_TOP, 0);
    hbox29->Add(Button1,1, wxALL | wxEXPAND, 5);
    hbox29->Add(Button3,1, wxALL | wxEXPAND, 5);
//    hbox29->Add(Button5,1, wxALL | wxEXPAND, 5);
    hbox29->Add(Button4,1, wxALL | wxEXPAND, 5);
    hbox29->Add(Button2,1, wxALL | wxEXPAND, 5);
 
//    hbox29->Hide(Button5);
    Panel29->SetSizer(hbox29); 

    wxBoxSizer* hbox28 = new wxBoxSizer(wxVERTICAL);
 //   hbox28->Add(StaticText10,0,wxLEFT | wxTOP | wxRIGHT | wxEXPAND, 90);
 //   hbox28->Add(DirPickerCtrl1,0, wxLEFT | wxRIGHT | wxEXPAND, 90);
    hbox28->Add(Panel29,0, wxALL | wxEXPAND, 90);
    Panel28->SetSizer(hbox28);     

    wxBoxSizer* hboxlb = new wxBoxSizer(wxVERTICAL);
    hboxlb->Add(Panel3,0, wxALL | wxEXPAND, 5);
    hboxlb->Add(StaticLine3,0, wxALL | wxEXPAND, 5);
    hboxlb->Add(Panel34,0, wxALL | wxEXPAND, 5);
    hboxlb->Add(StaticLine4,0, wxALL | wxEXPAND, 5);
    hboxlb->Add(CheckBox13,0, wxALL | wxEXPAND | wxALIGN_TOP, 5);
    hboxlb->Add(StaticLine5,0, wxALL | wxEXPAND, 5);
//    hboxlb->Add(Panel35,0, wxALL | wxEXPAND, 5);
    hboxlb->Add(Panel2,1, wxALL | wxEXPAND, 5);

    wxBoxSizer* hboxb = new wxBoxSizer(wxHORIZONTAL);
    hboxb->Add(hboxlb,0, wxALL | wxEXPAND, 5);
    hboxb->Add(StaticLine2,0, wxALL | wxEXPAND, 5);
    hboxb->Add(Panel5,2, wxALL | wxEXPAND, 5);    
    hboxb->Add(Panel28,1, wxALL | wxEXPAND, 5);  

    wxBoxSizer* hbox1 = new wxBoxSizer(wxVERTICAL);
    hbox1->Add(StaticText2,0, wxALL | wxEXPAND, 5);
    hbox1->Add(Panel4,0, wxALL | wxEXPAND, 5);
    hbox1->Add(hboxb,1, wxALL | wxEXPAND, 5);  
    Panel1->SetSizer(hbox1); 


	wxBoxSizer* hbox6 = new wxBoxSizer(wxVERTICAL);
	hbox6 ->Add(Grid1,2, wxALL | wxEXPAND, 5);
	Panel6->SetSizer(hbox6); 
	wxBoxSizer* hbox7 = new wxBoxSizer(wxVERTICAL);
	hbox7 ->Add(Grid2,2, wxALL | wxEXPAND, 5);
	Panel7->SetSizer(hbox7); 	
	wxBoxSizer* hbox8 = new wxBoxSizer(wxVERTICAL);
	hbox8 ->Add(Grid3,2, wxALL | wxEXPAND, 5);
	Panel8->SetSizer(hbox8); 	
	wxBoxSizer* hbox9 = new wxBoxSizer(wxVERTICAL);
	hbox9 ->Add(Grid4,2, wxALL | wxEXPAND, 5);
	Panel9->SetSizer(hbox9); 
	wxBoxSizer* hbox10 = new wxBoxSizer(wxVERTICAL);
	hbox10 ->Add(Grid5,2, wxALL | wxEXPAND, 5);
	Panel10->SetSizer(hbox10); 
	wxBoxSizer* hbox11 = new wxBoxSizer(wxVERTICAL);
	hbox11 ->Add(Grid6,2, wxALL | wxEXPAND, 5);
	Panel11->SetSizer(hbox11);
	wxBoxSizer* hbox12 = new wxBoxSizer(wxVERTICAL);
	hbox12 ->Add(Grid7,2, wxALL | wxEXPAND, 5);
	Panel12->SetSizer(hbox12);
	wxBoxSizer* hbox27 = new wxBoxSizer(wxVERTICAL);
	hbox27 ->Add(Grid20,2, wxALL | wxEXPAND, 5);
	Panel27->SetSizer(hbox27);


	wxBoxSizer* hbox15 = new wxBoxSizer(wxVERTICAL);
	hbox15 ->Add(Grid8,2, wxALL | wxEXPAND, 5);
	Panel15->SetSizer(hbox15); 
	wxBoxSizer* hbox16 = new wxBoxSizer(wxVERTICAL);
	hbox16 ->Add(Grid9,2, wxALL | wxEXPAND, 5);
	Panel16->SetSizer(hbox16); 	
	wxBoxSizer* hbox17 = new wxBoxSizer(wxVERTICAL);
	hbox17 ->Add(Grid10,2, wxALL | wxEXPAND, 5);
	Panel17->SetSizer(hbox17); 	
	wxBoxSizer* hbox18 = new wxBoxSizer(wxVERTICAL);
	hbox18 ->Add(Grid11,2, wxALL | wxEXPAND, 5);
	Panel18->SetSizer(hbox18); 
	wxBoxSizer* hbox19 = new wxBoxSizer(wxVERTICAL);
	hbox19 ->Add(Grid12,2, wxALL | wxEXPAND, 5);
	Panel19->SetSizer(hbox19); 
	wxBoxSizer* hbox20 = new wxBoxSizer(wxVERTICAL);
	hbox20 ->Add(Grid13,2, wxALL | wxEXPAND, 5);
	Panel20->SetSizer(hbox20); 
	wxBoxSizer* hbox21 = new wxBoxSizer(wxVERTICAL);
	hbox21 ->Add(Grid14,2, wxALL | wxEXPAND, 5);
	Panel21->SetSizer(hbox21); 
	wxBoxSizer* hbox22 = new wxBoxSizer(wxVERTICAL);
	hbox22 ->Add(Grid15,2, wxALL | wxEXPAND, 5);
	Panel22->SetSizer(hbox22); 	
	wxBoxSizer* hbox23 = new wxBoxSizer(wxVERTICAL);
	hbox23 ->Add(Grid16,2, wxALL | wxEXPAND, 5);
	Panel23->SetSizer(hbox23); 	
	wxBoxSizer* hbox24 = new wxBoxSizer(wxVERTICAL);
	hbox24 ->Add(Grid17,2, wxALL | wxEXPAND, 5);
	Panel24->SetSizer(hbox24); 
	wxBoxSizer* hbox25 = new wxBoxSizer(wxVERTICAL);
	hbox25 ->Add(Grid18,2, wxALL | wxEXPAND, 5);
	Panel25->SetSizer(hbox25); 
	wxBoxSizer* hbox26 = new wxBoxSizer(wxVERTICAL);
	hbox26 ->Add(Grid19,2, wxALL | wxEXPAND, 5);
	Panel26->SetSizer(hbox26);

	wxBoxSizer* hbox14b = new wxBoxSizer(wxVERTICAL);
	hbox14b ->Add(Notebook3,2, wxALL | wxEXPAND, 5);
	Panel14->SetSizer(hbox14b); 

	wxBoxSizer* hbox14 = new wxBoxSizer(wxVERTICAL);
	hbox14 ->Add(Panel14,2, wxALL | wxEXPAND, 5);
	Notebook2->SetSizer(hbox14); 

    Notebook2->AddPage(Panel1, _("Simulation"), false);
    Notebook2->AddPage(Panel14, _("Output"), false);
    // StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    // int __wxStatusBarWidths_1[1] = { -1 };
    // int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    // StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    // StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    // SetStatusBar(StatusBar1);
    // ToolBar1 = new wxToolBar(this, ID_TOOLBAR1, wxDefaultPosition, wxDefaultSize, wxTB_HORIZONTAL|wxRAISED_BORDER, _T("ID_TOOLBAR1"));
    // ToolBar1->SetToolBitmapSize(wxSize(32,16));
    // ToolBarItem1 = ToolBar1->AddTool(ID_TOOLBARITEM1, _("Save"), wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_FILE_SAVE")),wxART_TOOLBAR), wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_FILE_SAVE")),wxART_TOOLBAR), wxITEM_NORMAL, wxEmptyString, wxEmptyString);
    // ToolBarItem2 = ToolBar1->AddTool(ID_TOOLBARITEM2, _("Open"), wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_FILE_OPEN")),wxART_BUTTON), wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_FILE_OPEN")),wxART_TOOLBAR), wxITEM_NORMAL, wxEmptyString, wxEmptyString);
    // ToolBarItem3 = ToolBar1->AddTool(ID_TOOLBARITEM3, _("Print"), wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_PRINT")),wxART_TOOLBAR), wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_PRINT")),wxART_TOOLBAR), wxITEM_NORMAL, wxEmptyString, wxEmptyString);
    // ToolBar1->Realize();
    // SetToolBar(ToolBar1);
    MessageDialog1 = new wxMessageDialog(this, wxEmptyString, _("Error"), wxOK, wxDefaultPosition);
    MessageDialog2 = new wxMessageDialog(this, wxEmptyString, _("Caution"), wxOK, wxDefaultPosition);
    MessageDialog3 = new wxMessageDialog(this, wxEmptyString, wxEmptyString, wxOK, wxDefaultPosition);



    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
//    Mutex1 = new wxMutex();
    DataChanged = false;

    Connect(ID_SPINCTRL1,wxEVT_COMMAND_SPINCTRL_UPDATED,(wxObjectEventFunction)&SimFluUIFrame::OnSpinCtrl1Change);
    Connect(ID_SPINCTRL3,wxEVT_COMMAND_SPINCTRL_UPDATED,(wxObjectEventFunction)&SimFluUIFrame::OnSpinCtrl3Change);
    Connect(ID_NOTEBOOK1,wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED,(wxObjectEventFunction)&SimFluUIFrame::OnNotebook1PageChanged);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SimFluUIFrame::OnButton1Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SimFluUIFrame::OnButton2Click);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SimFluUIFrame::OnButton3Click);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SimFluUIFrame::OnButton4Click);
//    Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SimFluUIFrame::OnButton5Click1);
    Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SimFluUIFrame::OnButton6Click);
    Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SimFluUIFrame::OnButton7Click);
    Connect(ID_NOTEBOOK3,wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED,(wxObjectEventFunction)&SimFluUIFrame::OnNotebook3PageChanged);
    Connect(ID_NOTEBOOK2,wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED,(wxObjectEventFunction)&SimFluUIFrame::OnNotebook2PageChanged);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&SimFluUIFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&SimFluUIFrame::OnAbout);

 //   EVT_COMMAND(wxID_ANY, wxEVT_COMMAND_SIMFLUUITHREAD_UPDATE, SimFluUIFrame::OnThreadUpdate) 
 //  EVT_COMMAND(wxID_ANY, wxEVT_COMMAND_SIMFLUUITHREAD_COMPLETED, SimFluUIFrame::OnThreadCompletion)
    Connect(wxID_ANY, wxEVT_COMMAND_SIMFLUUITHREAD_UPDATE, wxThreadEventHandler(SimFluUIFrame::OnThreadUpdate));
    Connect(wxID_ANY, wxEVT_COMMAND_SIMFLUUITHREAD_COMPLETED, wxThreadEventHandler(SimFluUIFrame::OnThreadCompletion));
    Connect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(SimFluUIFrame::OnClose));
    //*)
}

void SimFluUIFrame::OnClose(wxCloseEvent& event)
{
    if (DataChanged)
    {
      wxMessageDialog* dialog = new wxMessageDialog(this,
        "Do you want to save input file?", "My app", wxYES_NO|wxCANCEL);

      int ans = dialog->ShowModal();
      dialog->Destroy();

      switch (ans)
      {
        case wxID_YES:      // Save, then destroy, quitting app
          this->Save();
    //      this->Destroy();
    //      return;
          break;
        case wxID_NO:       // Don't save; just destroy, quitting app
     //     this->Destroy();
     //     return;
          break;
        case wxID_CANCEL:   // Do nothing - so don't quit app.
        default:
          if (!event.CanVeto()) // Test if we can veto this deletion
    //        this->Destroy();    // If not, destroy the window anyway.
            break;
          else
            event.Veto();     // Notify the calling code that we didn't delete the frame.
          return;
      }
    }

/*
    {        
        wxCriticalSectionLocker enter(Thread1CS);        
        if (Thread1)         // does the thread still exist?        
        {            
            wxMessageOutputDebug().Printf("MYFRAME: deleting thread"); 
            if (Thread1->Delete() != wxTHREAD_NO_ERROR )                
                wxLogError("Can't delete the thread!");        
        }    
    }       // exit from the critical section to give the thread            
            // the possibility to enter its destructor            
            // (which is guarded with m_pThreadCS critical section!)    
    while (1)    
    {        
        {   // was the ~MyThread() function executed?            
            wxCriticalSectionLocker enter(Thread1CS);            
            if (!Thread1) break;        
        }        // wait for thread completion        
        Sleep(1);     
    }
    */
    if (Thread1)
    {
        wxCriticalSectionLocker enter(Thread1CS);
    //    Thread1->Delete();
    //    delete Thread1;
        Thread1=NULL;
    }

    this->Destroy();

}

SimFluUIFrame::~SimFluUIFrame()
{
    //(*Destroy(SimFluUIFrame)
    //*)
}

void SimFluUIFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void SimFluUIFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void SimFluUIFrame::OnPanel1Paint(wxPaintEvent& event)
{
}

void SimFluUIFrame::OnScrolledWindow1Paint(wxPaintEvent& event)
{
}

void SimFluUIFrame::OnGrid1CellLeftClick(wxGridEvent& event)
{
}

void SimFluUIFrame::OnNotebook1PageChanged(wxNotebookEvent& event)
{
}

void SimFluUIFrame::OnGrid1CellLeftClick1(wxGridEvent& event)
{
}

void SimFluUIFrame::OnGrid1CellLeftClick2(wxGridEvent& event)
{
}


void SimFluUIFrame::OnGrid2CellLeftClick(wxGridEvent& event)
{
}

void SimFluUIFrame::OnSpinCtrl1Change(wxSpinEvent& event)
{
    this->MonthChange();
}

void SimFluUIFrame::OnSpinCtrl3Change(wxSpinEvent& event)
{
    this->StrataChange();
}

void SimFluUIFrame::MonthChange()
{
    int month(SpinCtrl1->GetValue());
    int grid2row(Grid2->GetNumberRows());
    int grid5row(Grid5->GetNumberRows());
    int grid6row(Grid6->GetNumberRows());
    int grid7row(Grid7->GetNumberRows());
    if (month+3 < grid2row){
        DataChanged = true;
        Grid2->DeleteRows(month+1,grid2row-month-3);
        for (int i=month+1;i<grid2row;i++)
            Grid2->SetRowLabelValue(i,Grid2->GetRowLabelValue(i+grid2row-month-3));
        Grid5->DeleteRows(month,grid5row-month-1);
        for (int i=month;i<grid5row;i++)
            Grid5->SetRowLabelValue(i,Grid5->GetRowLabelValue(i+grid5row-month-1));
        Grid6->DeleteRows(month,grid6row-month-1);
        for (int i=month;i<grid6row;i++)
            Grid6->SetRowLabelValue(i,Grid6->GetRowLabelValue(i+grid6row-month-1));
        Grid7->DeleteRows(month+1,grid7row-month-3);
        for (int i=month+1;i<grid7row;i++)
            Grid7->SetRowLabelValue(i,Grid7->GetRowLabelValue(i+grid7row-month-3));
    }else if (month+3 > grid2row){
        DataChanged = true;
        Grid2->InsertRows(grid2row-2,month+3-grid2row);
        for (int i=grid2row-2;i<month+1;i++) {
            wxString lab = "Month ";
            lab << i;
            Grid2->SetRowLabelValue(i,lab);
        }
        Grid2->SetRowLabelValue(month+1,"Multiplyer for X=0");
        Grid2->SetRowLabelValue(month+2,"Multiplyer for Y=0");
        Grid5->InsertRows(grid5row-1,month+1-grid5row);
        for (int i=grid5row-1;i<month;i++){
            wxString lab = "Month ";
            lab << i+1;
            Grid5->SetRowLabelValue(i,lab);
        }
        Grid5->SetRowLabelValue(month,"Multiplyer for X=0");
        Grid6->InsertRows(grid6row-1,month+1-grid6row);
        for (int i=grid6row-1;i<month;i++){
            wxString lab = "Month ";
            lab << i+1;
            Grid6->SetRowLabelValue(i,lab);
        }
        Grid6->SetRowLabelValue(month,"Multiplyer for X=0");
        Grid7->InsertRows(grid7row-2,month+3-grid7row);
        for (int i=grid7row-2;i<month+1;i++){
            wxString lab = "Daily probabilities of onset of NFARI (month  ";
            lab << i << ")";
            Grid7->SetRowLabelValue(i,lab);
        }
        Grid7->SetRowLabelValue(month+1,"Daily NFARI probabilities multipliers for \nvaccinated or protected person");
        Grid7->SetRowLabelValue(month+2,"Daily NFARI probabilities multipliers for X=0");
        for (int j=0;j<month+3;j++) Grid7->AutoSizeRowLabelSize(j);
    }
}

void SimFluUIFrame::StrataChange()
{
    int strata=SpinCtrl3->GetValue();
    int grid1col(Grid1->GetNumberCols());
    int grid3row(Grid3->GetNumberRows());
    if (strata<grid1col){
        DataChanged = true;
        Grid1->DeleteCols(strata,grid1col-strata);
        Grid2->DeleteCols(strata,grid1col-strata);
        Grid3->DeleteCols(strata,grid1col-strata);
        Grid4->DeleteCols(strata,grid1col-strata);
        Grid5->DeleteCols(strata,grid1col-strata);
        Grid6->DeleteCols(strata,grid1col-strata);
        Grid7->DeleteCols(strata,grid1col-strata);
        Grid20->DeleteCols(strata,grid1col-strata);
        Grid3->DeleteRows(strata,grid3row-strata-1);
        for (int i=strata;i<grid3row;i++)
            Grid3->SetRowLabelValue(i,Grid3->GetRowLabelValue(i+grid3row-strata-1));
    }else if (strata>grid1col){
        DataChanged = true;
        Grid1->AppendCols(strata-grid1col);
        for (int i=grid1col;i<strata;i++){
            wxString lab = "Strata ";lab << i+1;
            Grid1->SetColLabelValue(i,lab);}
        Grid2->AppendCols(strata-grid1col);
        for (int i=grid1col;i<strata;i++){
            wxString lab = "Strata ";lab << i+1;
            Grid2->SetColLabelValue(i,lab);}
        Grid3->AppendCols(strata-grid1col);
        for (int i=grid1col;i<strata;i++){
            wxString lab = "Strata ";lab << i+1;
            Grid3->SetColLabelValue(i,lab);}
        Grid4->AppendCols(strata-grid1col);
        for (int i=grid1col;i<strata;i++){
            wxString lab = "Strata ";lab << i+1;
            Grid4->SetColLabelValue(i,lab);}
        Grid5->AppendCols(strata-grid1col);
        for (int i=grid1col;i<strata;i++){
            wxString lab = "Strata ";lab << i+1;
            Grid5->SetColLabelValue(i,lab);}
        Grid6->AppendCols(strata-grid1col);
        for (int i=grid1col;i<strata;i++){
            wxString lab = "Strata ";lab << i+1;
            Grid6->SetColLabelValue(i,lab);}
        Grid7->AppendCols(strata-grid1col);
        for (int i=grid1col;i<strata;i++){
            wxString lab = "Strata ";lab << i+1;
            Grid7->SetColLabelValue(i,lab);}
        Grid20->AppendCols(strata-grid1col);
        for (int i=grid1col;i<strata;i++){
            wxString lab = "Strata ";lab << i+1;
            Grid20->SetColLabelValue(i,lab);}
        Grid3->InsertRows(grid3row-1,strata+1-grid3row);
        for (int i=grid3row-1;i<strata;i++){
            wxString lab = "Strata ";lab << i+1;
            Grid3->SetRowLabelValue(i,lab);}
        Grid3->SetRowLabelValue(strata,"Number of contacts per day");
    }
}

//<<<<<<< .merge_file_a32220
void SimFluUIFrame::Initial()
{
    TextCtrl1->Clear();
    TextCtrl2->Clear();
//    TextCtrl3->Clear();
    TextCtrl4->Clear();
    TextCtrl5->Clear();
    RadioButton1->SetValue(FALSE);
    RadioButton2->SetValue(FALSE);
    CheckBox2->SetValue(FALSE);
    CheckBox3->SetValue(FALSE);
    CheckBox4->SetValue(FALSE);
    CheckBox5->SetValue(FALSE);
    CheckBox6->SetValue(FALSE);
    CheckBox7->SetValue(FALSE);
    CheckBox1->SetValue(FALSE);
    CheckBox10->SetValue(FALSE);
    CheckBox8->SetValue(FALSE);
    CheckBox9->SetValue(FALSE);
    CheckBox11->SetValue(FALSE);
    CheckBox12->SetValue(FALSE);
    SpinCtrl4->SetValue(4);
    SpinCtrl1->SetValue(3);
    SpinCtrl3->SetValue(4);
//    SpinCtrl2->SetValue(10);
    this->MonthChange();
    this->StrataChange();
    while(Grid8->GetNumberRows()>1) Grid8->DeleteRows();
    while(Grid9->GetNumberRows()>1) Grid9->DeleteRows();
    while(Grid10->GetNumberRows()>1) Grid10->DeleteRows();
    while(Grid11->GetNumberRows()>1) Grid11->DeleteRows();
    while(Grid12->GetNumberRows()>1) Grid12->DeleteRows();
    while(Grid13->GetNumberRows()>1) Grid13->DeleteRows();
    while(Grid14->GetNumberRows()>1) Grid14->DeleteRows();
    while(Grid15->GetNumberRows()>1) Grid15->DeleteRows();
    while(Grid16->GetNumberRows()>1) Grid16->DeleteRows();
    while(Grid17->GetNumberRows()>1) Grid17->DeleteRows();
    while(Grid18->GetNumberRows()>1) Grid18->DeleteRows();
    while(Grid19->GetNumberRows()>1) Grid19->DeleteRows();
    Grid1->ClearGrid();
    Grid2->ClearGrid();
    Grid3->ClearGrid();
    Grid4->ClearGrid();
    Grid5->ClearGrid();
    Grid6->ClearGrid();
    Grid7->ClearGrid();
    Grid11->ClearGrid();
    Grid12->ClearGrid();
    Grid13->ClearGrid();
    Grid14->ClearGrid();
    Grid15->ClearGrid();
    Grid16->ClearGrid();
    Grid17->ClearGrid();
    Grid8->ClearGrid();
    Grid9->ClearGrid();
    Grid18->ClearGrid();
    Grid19->ClearGrid();
    Grid10->ClearGrid();
    Grid20->ClearGrid();

}


int SimFluUIFrame::ErrorCheck()
{
//    wxString test =
//    wxStreamToTextRedirector redirect(TextCtrl3);
    double num;long num1;
    if (TextCtrl1->GetValue()==wxEmptyString){
        MessageDialog1->SetMessage("Title cannot be empty!");
        MessageDialog1->ShowModal();
        return 1;
    }


    if (TextCtrl2->GetValue()==wxEmptyString){
        MessageDialog1->SetMessage("Year cannot be empty!");
        MessageDialog1->ShowModal();
        return 1;
    }
    if ( (!TextCtrl2->GetValue().ToLong(&num1)) || num1>2100 || num1<1500 ){
        MessageDialog1->SetMessage("Year is not correct!");
        MessageDialog1->ShowModal();
        return 2;
    }

//    cout<<SpinCtrl4->GetValue()<<endl;


    if (TextCtrl4->GetValue()==wxEmptyString){
        MessageDialog1->SetMessage("Seed cannot be empty!");
        MessageDialog1->ShowModal();
        return 1;
    }
    if (!TextCtrl4->GetValue().ToLong(&num1)){
        MessageDialog1->SetMessage("Seed is not correct!");
        MessageDialog1->ShowModal();
        return 2;
    }


    if (SpinCtrl4->GetValue()>12 || SpinCtrl4->GetValue()<1){
        MessageDialog1->SetMessage("First month cannot be empty!");
        MessageDialog1->ShowModal();
        return 1;
    }
    int strata(SpinCtrl3->GetValue());
    int month(SpinCtrl1->GetValue());
    if (month<1){
        MessageDialog1->SetMessage("Month is not correct!");
        MessageDialog1->ShowModal();
        return 1;
    }
/*    if (SpinCtrl2->GetValue()<1){
        cout<<"Simulation number error!"<<endl;
        return 1;
    }*/

    if (TextCtrl5->GetValue()==wxEmptyString){
        MessageDialog1->SetMessage("Simulation number cannot be empty!");
        MessageDialog1->ShowModal();
        return 1;
    }
    if ( (!TextCtrl5->GetValue().ToLong(&num1)) || num1<1 ){
        MessageDialog1->SetMessage("Simulation number is not correct!");
        MessageDialog1->ShowModal();
        return 2;
    }


    if (strata<1){
        MessageDialog1->SetMessage("Strata cannot be empty!");
        MessageDialog1->ShowModal();
        return 1;
    }
    for (int i=0;i<strata;i++){
        for (int j=0;j<4;j++){
            if (Grid1->GetCellValue(j,i)==wxEmptyString){
                Notebook1->ChangeSelection(0);
                MessageDialog1->SetMessage("Strata page data cannot be empty!");
                MessageDialog1->ShowModal();
                return 1;
            }
            if (j==0){
                if ( (!Grid1->GetCellValue(j,i).ToLong(&num1)) || num1<0 ){
                    Notebook1->ChangeSelection(0);
                    MessageDialog1->SetMessage("Strata page data are not correct!");
                    MessageDialog1->ShowModal();
                    return 2;
                }
            }else{
                if ( (!Grid1->GetCellValue(j,i).ToDouble(&num)) || num<0 || num>1 ){
                    Notebook1->ChangeSelection(0);
                    MessageDialog1->SetMessage("Strata page data are not correct!");
                    MessageDialog1->ShowModal();
                    return 2;
                }
            }
        }
    }
    for (int i=0;i<strata;i++){
        for (int j=0;j<month+3;j++){
            if (Grid2->GetCellValue(j,i)==wxEmptyString){
                Notebook1->ChangeSelection(1);
                MessageDialog1->SetMessage("Vac-Cov page data cannot be empty!");
                MessageDialog1->ShowModal();
                return 1;
            }
            if (j<month+1){
                if ( (!Grid2->GetCellValue(j,i).ToDouble(&num)) || num>1 || num<0 ){
                    Notebook1->ChangeSelection(1);
                    MessageDialog1->SetMessage("Vac-Cov page data are not correct!");
                    MessageDialog1->ShowModal();
                    return 2;
                }
            }else{
                if ( (!Grid2->GetCellValue(j,i).ToDouble(&num)) || num<0 ){
                    Notebook1->ChangeSelection(1);
                    MessageDialog1->SetMessage("Vac-Cov page data are not correct!");
                    MessageDialog1->ShowModal();
                    return 2;
                }
            }
        }
    }
    for (int i=0;i<strata;i++){
        for (int j=0;j<strata+1;j++){
            if (Grid3->GetCellValue(j,i)==wxEmptyString){
                Notebook1->ChangeSelection(2);
                MessageDialog1->SetMessage("Contacts page data cannot be empty!");
                MessageDialog1->ShowModal();
                return 1;
            }
            if (j<strata){
                if ( (!Grid3->GetCellValue(j,i).ToDouble(&num)) || num<0 || num>1 ){
                    Notebook1->ChangeSelection(2);
                    MessageDialog1->SetMessage("Contacts page data are not correct!");
                    MessageDialog1->ShowModal();
                    return 2;
                }
            }else{
                if ( (!Grid3->GetCellValue(j,i).ToLong(&num1)) || num1<0 ){
                    Notebook1->ChangeSelection(2);
                    MessageDialog1->SetMessage("Contacts page data are not correct!");
                    MessageDialog1->ShowModal();
                    return 2;
                }
            }
        }
    }
    for (int i=0;i<strata;i++){
        for (int j=0;j<4;j++){
            if ( Grid4->GetCellValue(j,i)==wxEmptyString && j!=0 ){
                Notebook1->ChangeSelection(3);
                MessageDialog1->SetMessage("Flu Params page data cannot be empty!");
                MessageDialog1->ShowModal();
                return 1;
            }
            if (j==0 || j==1){
                if ( (!Grid4->GetCellValue(j,i).ToLong(&num1)) || num1<0 ){
                    Notebook1->ChangeSelection(3);
                    MessageDialog1->SetMessage("Flu Params page data are not correct!");
                    MessageDialog1->ShowModal();
                    return 2;
                }
            }else if (j==2 || j==3){
                if ( (!Grid4->GetCellValue(j,i).ToDouble(&num)) || num<0 || num>1 ){
                    Notebook1->ChangeSelection(3);
                    MessageDialog1->SetMessage("Flu Params page data are not correct!");
                    MessageDialog1->ShowModal();
                    return 2;
                }
            }
        }
    }
    for (int i=0;i<strata;i++){
        for (int j=0;j<month+1;j++){
            if (Grid5->GetCellValue(j,i)==wxEmptyString){
                Notebook1->ChangeSelection(4);
                MessageDialog1->SetMessage("Trans-Prob page data cannot be empty!");
                MessageDialog1->ShowModal();
                return 1;
            }
            if (j<month){
                if ( (!Grid5->GetCellValue(j,i).ToDouble(&num)) || num>1 || num<0 ){
                    Notebook1->ChangeSelection(4);
                    MessageDialog1->SetMessage("Trans-Prob page data are not correct!");
                    MessageDialog1->ShowModal();
                    return 2;
                }
            }else{
                if ( (!Grid5->GetCellValue(j,i).ToDouble(&num)) || num<0 ){
                    Notebook1->ChangeSelection(4);
                    MessageDialog1->SetMessage("Trans-Prob page data are not correct!");
                    MessageDialog1->ShowModal();
                    return 2;
                }
            }
        }
    }
    for (int i=0;i<strata;i++){
        for (int j=0;j<month+1;j++){
            if (Grid6->GetCellValue(j,i)==wxEmptyString){
                Notebook1->ChangeSelection(5);
                MessageDialog1->SetMessage("Vac-Efficacy page data cannot be empty!");
                MessageDialog1->ShowModal();
                return 1;
            }
            if (j<month){
                if ( (!Grid6->GetCellValue(j,i).ToDouble(&num)) || num>1 || num<0 ){
                    Notebook1->ChangeSelection(5);
                    MessageDialog1->SetMessage("Vac-Efficacy page data are not correct!");
                    MessageDialog1->ShowModal();
                    return 2;
                }
            }else{
                if ( (!Grid6->GetCellValue(j,i).ToDouble(&num)) || num<0 ){
                    Notebook1->ChangeSelection(5);
                    MessageDialog1->SetMessage("Vac-Efficacy page data are not correct!");
                    MessageDialog1->ShowModal();
                    return 2;
                }
            }
        }
    }
    for (int i=0;i<strata;i++){
        for (int j=0;j<month+3;j++){
            if (Grid7->GetCellValue(j,i)==wxEmptyString){
                Notebook1->ChangeSelection(6);
                MessageDialog1->SetMessage("NFARI page data cannot be empty!");
                MessageDialog1->ShowModal();
                return 1;
            }
            if (j==0){
                if ( (!Grid7->GetCellValue(j,i).ToLong(&num1)) || num1<0 ){
                    Notebook1->ChangeSelection(6);
                    MessageDialog1->SetMessage("NFARI page data are not correct!");
                    MessageDialog1->ShowModal();
                    return 2;
                }
            }else if (j<month+1){
                if ( (!Grid7->GetCellValue(j,i).ToDouble(&num)) || num<0 || num>1 ){
                    Notebook1->ChangeSelection(6);
                    MessageDialog1->SetMessage("NFARI page data are not correct!");
                    MessageDialog1->ShowModal();
                    return 2;
                }
            }else{
                if ( (!Grid7->GetCellValue(j,i).ToDouble(&num)) || num<0 ){
                    Notebook1->ChangeSelection(6);
                    MessageDialog1->SetMessage("NFARI page data are not correct!");
                    MessageDialog1->ShowModal();
                    return 2;
                }
            }
        }
    }
    for (int i=0;i<strata;i++){
        for (int j=0;j<8;j++){
            if (Grid20->GetCellValue(j,i)==wxEmptyString){
                Notebook1->ChangeSelection(7);
                MessageDialog1->SetMessage("Visit page data cannot be empty!");
                MessageDialog1->ShowModal();
                return 1;
            }
            if ( j==0 || j==4 ){
                if ( (!Grid20->GetCellValue(j,i).ToDouble(&num)) || num<0 || num>1 ){
                    Notebook1->ChangeSelection(7);
                    MessageDialog1->SetMessage("Visit page data are not correct!");
                    MessageDialog1->ShowModal();
                    return 2;
                }
            }else{
                if ( (!Grid20->GetCellValue(j,i).ToDouble(&num)) || num<0 ){
                    Notebook1->ChangeSelection(7);
                    MessageDialog1->SetMessage("Visit page data are not correct!");
                    MessageDialog1->ShowModal();
                    return 2;
                }
            }
        }
    }
    return 0;

}

std::istream& SimFluUIFrame::safeGetline(std::istream& is, std::string& t)
{
    t.clear();
    std::istream::sentry se(is, true);
    std::streambuf* sb = is.rdbuf();

    for(;;) {
        int c = sb->sbumpc();
        switch (c) {
        case '\n':
            return is;
        case '\r':
            if(sb->sgetc() == '\n')
                sb->sbumpc();
            return is;
        case ',':
        	continue;
        case EOF:
            if(t.empty())
                is.setstate(std::ios::eofbit);
            return is;
        default:
            t += (char)c;
        }
    }
}

void SimFluUIFrame::OnButton1Click(wxCommandEvent& event)
{

//    TextCtrl3->Clear();
//    wxStreamToTextRedirector redirect(TextCtrl3);
//    Notebook1->ChangeSelection(8);
    wxString filename = wxLoadFileSelector("Choose a file to open","csv",wxEmptyString);
    if (filename.empty()){
        MessageDialog3->SetMessage("Loading is canceled!");
        MessageDialog3->ShowModal();
    //    cout<<"LOADING IS CANCELLED!"<<endl;
        return;
    }
    this->Initial();

    #ifdef _WIN32
        outputFilesPath = filename.BeforeLast('\\').ToStdString();
        inputfilename = filename.AfterLast('\\').ToStdString();  
    #else
        outputFilesPath = filename.BeforeLast('/').ToStdString();
        inputfilename = filename.AfterLast('/').ToStdString();
    #endif
    ifstream fin(filename);
//    ofstream fout("params.txt");

    string chute;
    getline(fin,chute,',');getline(fin,chute,',');
    *TextCtrl1<<chute; //Title
    safeGetline(fin,chute);
    getline(fin,chute,',');getline(fin,chute,',');
    *TextCtrl5<<chute;//Number of simulations
    safeGetline(fin,chute);
    getline(fin,chute,',');getline(fin,chute,',');
    *TextCtrl4<<chute; //Seed
    safeGetline(fin,chute);
    getline(fin,chute,',');getline(fin,chute,',');
    RadioButton1->SetValue(chute=="yes"?TRUE:FALSE);//All-or-none vaccine (Leaky vaccine if 'no')
    RadioButton2->SetValue(chute=="yes"?FALSE:TRUE);//All-or-none vaccine (Leaky vaccine if 'no')
    safeGetline(fin,chute);
    getline(fin,chute,',');getline(fin,chute,',');//Output files ('yes' or 'no' for each)
    safeGetline(fin,chute);
    getline(fin,chute,',');getline(fin,chute,',');
    CheckBox2->SetValue(chute=="yes"?TRUE:FALSE);//Input parameters
    safeGetline(fin,chute);
    getline(fin,chute,',');getline(fin,chute,',');
    CheckBox3->SetValue(chute=="yes"?TRUE:FALSE);//Vaccination
    safeGetline(fin,chute);
    getline(fin,chute,',');getline(fin,chute,',');
    CheckBox4->SetValue(chute=="yes"?TRUE:FALSE);//Detailed
    safeGetline(fin,chute);
    getline(fin,chute,',');getline(fin,chute,',');
    CheckBox5->SetValue(chute=="yes"?TRUE:FALSE);//Contacts
    safeGetline(fin,chute);
    getline(fin,chute,',');getline(fin,chute,',');
    CheckBox1->SetValue(chute=="yes"?TRUE:FALSE);//Prevalance
    safeGetline(fin,chute);
    getline(fin,chute,',');getline(fin,chute,',');
    CheckBox7->SetValue(chute=="yes"?TRUE:FALSE);//Incidence-daily-each sim
    safeGetline(fin,chute);
    getline(fin,chute,',');getline(fin,chute,',');
    CheckBox6->SetValue(chute=="yes"?TRUE:FALSE);//Incidence-monthly-each sim
    safeGetline(fin,chute);
    getline(fin,chute,',');getline(fin,chute,',');
    CheckBox8->SetValue(chute=="yes"?TRUE:FALSE);//Incidence-season-each sim
    safeGetline(fin,chute);
    getline(fin,chute,',');getline(fin,chute,',');
    CheckBox9->SetValue(chute=="yes"?TRUE:FALSE);//Incidence-daily-overall
    safeGetline(fin,chute);
    getline(fin,chute,',');getline(fin,chute,',');
    CheckBox10->SetValue(chute=="yes"?TRUE:FALSE);//Incidence-monthly-overall
    safeGetline(fin,chute);
    getline(fin,chute,',');getline(fin,chute,',');
    CheckBox12->SetValue(chute=="yes"?TRUE:FALSE);//Incidence-season-overall
    safeGetline(fin,chute);
    getline(fin,chute,',');getline(fin,chute,',');
    CheckBox11->SetValue(chute=="yes"?TRUE:FALSE);//Outcomes-File
    safeGetline(fin,chute);
    getline(fin,chute,',');getline(fin,chute,',');
    CheckBox13->SetValue(chute=="yes"?TRUE:FALSE);//add timestamp
    safeGetline(fin,chute);

    if(CheckBox3->GetValue()>0 ||
       CheckBox4->GetValue()>0 ||
       CheckBox5->GetValue()>0 ||
       CheckBox1->GetValue()>0 ||
       CheckBox7->GetValue()>0 ||
       CheckBox6->GetValue()>0 ||
       CheckBox8->GetValue()>0 ||
       CheckBox11->GetValue()>0){
        this->ShowMore();
    }

    getline(fin,chute,',');getline(fin,chute,',');
    *TextCtrl2<<chute;//Year of beginning of season
    safeGetline(fin,chute);
    getline(fin,chute,',');getline(fin,chute,',');
    SpinCtrl4->SetValue(chute);//Month of beginning of season
    safeGetline(fin,chute);
    getline(fin,chute,',');getline(fin,chute,',');
    SpinCtrl1->SetValue(chute);//Number of months in the season
    int month=atoi(chute.c_str());
    safeGetline(fin,chute);
    getline(fin,chute,',');getline(fin,chute,',');
    SpinCtrl3->SetValue(chute);//Number of strata
    int strata=atoi(chute.c_str());
    safeGetline(fin,chute);

    this->MonthChange();
    this->StrataChange();
//    this->OnSpinCtrl1Change(event);
//    this->OnSpinCtrl3Change();
//    DataChanged = false;
    for (int k=0;k<4;k++){//Size of strata + Prob of X=1 + Prob of U=1 given X=1 + Prob of U=1 given X=0
        getline(fin,chute,',');
        for (int i=0;i<strata-1;i++){
            getline(fin,chute,',');
            Grid1->SetCellValue(k,i,chute);
        }
        safeGetline(fin,chute);
        Grid1->SetCellValue(k,strata-1,chute);
    }
    safeGetline(fin,chute);//Vaccination incremental coverage
    for (int j=0;j<month+1;j++){
        getline(fin,chute,',');
        for (int i=0;i<strata-1;i++){
            getline(fin,chute,',');
            Grid2->SetCellValue(j,i,chute);
        }
        safeGetline(fin,chute);
        Grid2->SetCellValue(j,strata-1,chute);
    }
    getline(fin,chute,',');//Vac incremental coverage multiplier for X
    for (int i=0;i<strata-1;i++){
        getline(fin,chute,',');
        Grid2->SetCellValue(month+1,i,chute);
    }
    safeGetline(fin,chute);
    Grid2->SetCellValue(month+1,strata-1,chute);

    getline(fin,chute,',');//Vac incremental coverage multiplier for U
    for (int i=0;i<strata-1;i++){
        getline(fin,chute,',');
        Grid2->SetCellValue(month+2,i,chute);
    }
    safeGetline(fin,chute);
    Grid2->SetCellValue(month+2,strata-1,chute);

    getline(fin,chute,',');//Initial number of infected persons
    safeGetline(fin,chute);
    TextCtrl6->SetValue(chute);
    //     Grid4->SetCellValue(0,i,chute);
    // }
    // safeGetline(fin,chute);
    // Grid4->SetCellValue(0,strata-1,chute);

    getline(fin,chute,',');//Number of contacts per day per person
    for (int i=0;i<strata-1;i++){
        getline(fin,chute,',');
        Grid3->SetCellValue(strata,i,chute);
    }
    safeGetline(fin,chute);
    Grid3->SetCellValue(strata,strata-1,chute);

    safeGetline(fin,chute);//Distribution of contacts
    for (int k=0;k<strata;k++){
        getline(fin,chute,',');
        for (int i=0;i<strata-1;i++){
            getline(fin,chute,',');
            Grid3->SetCellValue(k,i,chute);
        }
        safeGetline(fin,chute);
        Grid3->SetCellValue(k,strata-1,chute);
    }

    for (int k=0;k<4;k++){//Length of latent period + length of infectious period + Pro of illness + Relative infectiouosness
        getline(fin,chute,',');
        for (int i=0;i<strata-1;i++){
            getline(fin,chute,',');
            Grid4->SetCellValue(k,i,chute);
        }
        safeGetline(fin,chute);
        Grid4->SetCellValue(k,strata-1,chute);
    }

    safeGetline(fin,chute);//Transmission probabilities + multipliers
    for (int j=0;j<month+1;j++){
        getline(fin,chute,',');
        for (int i=0;i<strata-1;i++){
            getline(fin,chute,',');
            Grid5->SetCellValue(j,i,chute);
        }
        safeGetline(fin,chute);
        Grid5->SetCellValue(j,strata-1,chute);
    }

    safeGetline(fin,chute);//Vaccine efficacy + multiplier
    for (int j=0;j<month+1;j++){
        getline(fin,chute,',');
        for (int i=0;i<strata-1;i++){
            getline(fin,chute,',');
            Grid6->SetCellValue(j,i,chute);
        }
        safeGetline(fin,chute);
        Grid6->SetCellValue(j,strata-1,chute);
    }

    getline(fin,chute,',');//Length of NFARI episode
    for (int i=0;i<strata-1;i++){
        getline(fin,chute,',');
        Grid7->SetCellValue(0,i,chute);
    }
    safeGetline(fin,chute);
    Grid7->SetCellValue(0,strata-1,chute);

    safeGetline(fin,chute);//Daily probability of oneset of NFARI for X=1 + multipliers
    for (int j=0;j<month+2;j++){
        getline(fin,chute,',');
        for (int i=0;i<strata-1;i++){
            getline(fin,chute,',');
            Grid7->SetCellValue(j+1,i,chute);
        }
        safeGetline(fin,chute);
        Grid7->SetCellValue(j+1,strata-1,chute);
    }

    for (int k=0;k<2;k++){
    	safeGetline(fin,chute);//Probability of visit for a case of FARI or NFARI
	    for (int j=0;j<4;j++){
	        getline(fin,chute,',');//X=1 and U=1 + multipliers
	        for (int i=0;i<strata-1;i++){
	            getline(fin,chute,',');
	            Grid20->SetCellValue(4*k+j,i,chute);
	        }
	        safeGetline(fin,chute);
	        Grid20->SetCellValue(4*k+j,strata-1,chute);
	    }
	}

//    fout<<chute;
//    fout.close();
    fin.close();
    MessageDialog3->SetMessage("Loading is completed!");
    MessageDialog3->ShowModal();
//    cout<<"LOADING IS COMPLETED!"<<endl;

}
void SimFluUIFrame::Save()
{
//    wxStreamToTextRedirector redirect(TextCtrl3);
//    Notebook1->ChangeSelection(8);
    wxString filename = wxSaveFileSelector("Choose a name to save","csv",wxEmptyString);
    if (filename==wxEmptyString){
        MessageDialog3->SetMessage("Saving is cancelled!");
        MessageDialog3->ShowModal();
    //    cout<<"SAVING IS CANCELLED!"<<endl;
        return;
    }


    DataChanged = false;
    ofstream param;
    param.open(filename);
    param<<"Title (alphanumeric),"<<TextCtrl1->GetValue()<<","<<",Comments"<<endl;
    param<<"Number of simluations,"<<TextCtrl5->GetValue()<<","<<",* For debugging purposes"<<endl;
    param<<"Seed,"<<TextCtrl4->GetValue()<<","<<",** Fractions based on initial stratum size"<<endl;
    param<<"All-or-none vaccine (Leaky vaccine if 'no'),"<<(RadioButton1->GetValue()?"yes":"no")<<","<<",*** Based on ratio of transmission probabilities"<<endl;
    param<<"Output files ('yes' or 'no' for each),,"<<",\"X: Health status; Healthy: 1, Frail: 0\""<<endl;
    param<<"Input and calculated parameters,"<<(CheckBox2->GetValue()?"yes":"no")<<","<<",\"U: Propensity to seek medical care; High: 1, Low: 0\""<<endl;
    param<<"Vaccination *,"<<(CheckBox3->GetValue()?"yes":"no")<<","<<",FARI: Influenza Actute Respiratory Illness"<<endl;
    param<<"Detailed *,"<<(CheckBox4->GetValue()?"yes":"no")<<","<<",NFARI: Non-Influenza Actute Respiratory Illness"<<endl;
    param<<"Contacts *,"<<(CheckBox5->GetValue()?"yes":"no")<<","<<endl;
    param<<"Prevalance *,"<<(CheckBox1->GetValue()?"yes":"no")<<","<<endl;
    param<<"Incidence-daily-each sim,"<<(CheckBox7->GetValue()?"yes":"no")<<","<<endl;
    param<<"Incidence-monthly-each sim,"<<(CheckBox6->GetValue()?"yes":"no")<<","<<endl;
    param<<"Incidence-season-each sim,"<<(CheckBox8->GetValue()?"yes":"no")<<","<<endl;
    param<<"Incidence-daily-overall,"<<(CheckBox9->GetValue()?"yes":"no")<<","<<endl;
    param<<"Incidence-monthly-overall,"<<(CheckBox10->GetValue()?"yes":"no")<<","<<endl;
    param<<"Incidence-season-overall,"<<(CheckBox12->GetValue()?"yes":"no")<<","<<endl;
    param<<"Outcomes-File,"<<(CheckBox11->GetValue()?"yes":"no")<<","<<endl;
    param<<"Add timestamp to output file names,"<<(CheckBox13->GetValue()?"yes":"no")<<","<<endl;
    param<<"Year of beginning of season,"<<TextCtrl2->GetValue()<<","<<endl;
    param<<"Month of beginning of season,"<<SpinCtrl4->GetValue()<<","<<endl;
    int strata(SpinCtrl3->GetValue());
    int month(SpinCtrl1->GetValue());
    param<<"Number of months in the season,"<<month<<","<<endl;
    param<<"Number of strata,"<<strata<<","<<endl;
    param<<"Sizes of strata";
    for (int i=0;i<strata;i++) param<<","<<Grid1->GetCellValue(0,i);param<<endl;
    param<<"Probability of X=1";
    for (int i=0;i<strata;i++) param<<","<<Grid1->GetCellValue(1,i);param<<endl;
    param<<"Probability of U=1 given X=1";
    for (int i=0;i<strata;i++) param<<","<<Grid1->GetCellValue(2,i);param<<endl;
    param<<"Probability of U=1 given X=0";
    for (int i=0;i<strata;i++) param<<","<<Grid1->GetCellValue(3,i);param<<endl;
    param<<"Vaccine incremental coverage for X=1, U=1 (matrix - rows for months columns for strata),,"<<endl;;
    for (int j=0;j<=month;j++){
        param<<j;
        for (int i=0;i<strata;i++)
            param<<","<<Grid2->GetCellValue(j,i);
        param<<endl;}
    param<<"Vaccination incremental coverage multiplier for X=0";
    for (int i=0;i<strata;i++) param<<","<<Grid2->GetCellValue(month+1,i);param<<endl;
    param<<"Vaccination incremental coverage multiplier for U=0";
    for (int i=0;i<strata;i++) param<<","<<Grid2->GetCellValue(month+2,i);param<<endl;
    param<<"Initial number of infected persons";
    param<<","<<TextCtrl6->GetValue();param<<endl;
    param<<"Number of contacts per day for each person";
    for (int i=0;i<strata;i++) param<<","<<Grid3->GetCellValue(strata,i);param<<endl;
    param<<"Distribution of contacts - K by K matrix (Rho),,"<<endl;
    for (int k=0;k<strata;k++){
        param<<k+1;
        for (int i=0;i<strata;i++)
            param<<","<<Grid3->GetCellValue(k,i);
        param<<endl;}
    param<<"Length of latent period (days)";
    for (int i=0;i<strata;i++) param<<","<<Grid4->GetCellValue(0,i);param<<endl;
    param<<"Length of infectious period (days)";
    for (int i=0;i<strata;i++) param<<","<<Grid4->GetCellValue(1,i);param<<endl;
    param<<"Probability of illness given infection";
    for (int i=0;i<strata;i++) param<<","<<Grid4->GetCellValue(2,i);param<<endl;
    param<<"Relative infectiousness if not ill";
    for (int i=0;i<strata;i++) param<<","<<Grid4->GetCellValue(3,i);param<<endl;
    param<<"Transmission probabilities to unprotected for X=1 (matrix - rows for months columns for strata),,"<<endl;
    for (int j=0;j<month;j++){
        param<<j+1;
        for (int i=0;i<strata;i++)
            param<<","<<Grid5->GetCellValue(j,i);
        param<<endl;}
    param<<"Transmission probabilities multiplyers for X=0 in unvaccinated or unprotected ";
    for (int i=0;i<strata;i++) param<<","<<Grid5->GetCellValue(month,i);param<<endl;
    param<<"Vaccine efficacy for X=1 (matrix - rows for months, columns for strata),,"<<endl;
    for (int j=0;j<month;j++){
        param<<j+1;
        for (int i=0;i<strata;i++)
            param<<","<<Grid6->GetCellValue(j,i);
        param<<endl;}
    param<<"Vaccine efficacy multiplyers for X=0";
    for (int i=0;i<strata;i++) param<<","<<Grid6->GetCellValue(month,i);param<<endl;
    param<<"Length of NFARI episode (days)";
    for (int i=0;i<strata;i++) param<<","<<Grid7->GetCellValue(0,i);param<<endl;
    param<<"Daily probabilities of onset of NFARI for X=1 in unvaccinated or unprotected,,"<<endl;
    for (int j=0;j<month;j++){
        param<<j+1;
        for (int i=0;i<strata;i++)
            param<<","<<Grid7->GetCellValue(j+1,i);
        param<<endl;}
    param<<"NFARI probabilities multipliers for vaccinated or protected person";
    for (int i=0;i<strata;i++) param<<","<<Grid7->GetCellValue(month+1,i);param<<endl;
    param<<"NFARI probabilities multipliers for X=0";
    for (int i=0;i<strata;i++) param<<","<<Grid7->GetCellValue(month+2,i);param<<endl;
    param<<"Probability of visit for a case of FARI:"<<endl;
    param<<"For unvaccinated or unprotected and X=1 and U=1";
    for (int i=0;i<strata;i++) param<<","<<Grid20->GetCellValue(0,i);param<<endl;
    param<<"Multiplier for vaccinated";
    for (int i=0;i<strata;i++) param<<","<<Grid20->GetCellValue(1,i);param<<endl;
    param<<"Multiplier for X=0";
    for (int i=0;i<strata;i++) param<<","<<Grid20->GetCellValue(2,i);param<<endl;
    param<<"Multiplier for U=0";
    for (int i=0;i<strata;i++) param<<","<<Grid20->GetCellValue(3,i);param<<endl;
    param<<"Probability of visit for a case of NFARI:"<<endl;
    param<<"For unvaccinated or unprotected with X=1 and U=1";
    for (int i=0;i<strata;i++) param<<","<<Grid20->GetCellValue(4,i);param<<endl;
    param<<"Multiplier for vaccinated";
    for (int i=0;i<strata;i++) param<<","<<Grid20->GetCellValue(5,i);param<<endl;
    param<<"Multiplier for X=0";
    for (int i=0;i<strata;i++) param<<","<<Grid20->GetCellValue(6,i);param<<endl;
    param<<"Multiplier for U=0";
    for (int i=0;i<strata;i++) param<<","<<Grid20->GetCellValue(7,i);param<<endl;

    MessageDialog3->SetMessage("SAVING IS COMPLETED!");
    MessageDialog3->ShowModal();
//    cout<<"SAVING IS CONPLETED!"<<endl;
    param.close();
}

void SimFluUIFrame::OnButton2Click(wxCommandEvent& event)
{
    this->Save();
}



void SimFluUIFrame::OnButton3Click(wxCommandEvent& event)
{
	switch(ErrorCheck()){
        case 1:
        case 2:
            MessageDialog3->SetMessage("Stopped running!");
            MessageDialog3->ShowModal();
            return;
        //    cout<<"Stoped running!"<<endl;return;
        default:break;
    }
    string temp = outputFilesPath;


    wxDialog* Dialog1 = new wxDialog(this, wxID_ANY, "Output path", wxDefaultPosition, wxDefaultSize, wxDD_DEFAULT_STYLE | wxDD_DIR_MUST_EXIST);
    wxStaticText* StaticText10 = new wxStaticText(Dialog1, wxID_ANY, "The output will be saved in the following directory: ", wxPoint(10,30), wxDefaultSize, 0, "");    
 //   wxStaticText* StaticText12 = new wxStaticText(Dialog1, wxID_ANY, outputFilesPath, wxPoint(10,100), wxDefaultSize, 0, "");
    wxDirPickerCtrl* DirPickerCtrl1 = new wxDirPickerCtrl(Dialog1, wxID_ANY, outputFilesPath, wxDirDialogNameStr, wxPoint(10,110), wxDefaultSize);

 //   DirPickerCtrl1->GetTextCtrl()->SetEditable(false);
    wxStaticText* StaticText11 = new wxStaticText(Dialog1, wxID_ANY, "To change the output directory press Browse button ", wxPoint(10,190), wxDefaultSize, 0, "");
    wxButton* Button8 = new wxButton(Dialog1, wxID_OK, "Run", wxPoint(700,170), wxDefaultSize, 0, wxDefaultValidator, "");
    wxButton* Button9= new wxButton(Dialog1, wxID_CANCEL, "Cancel", wxPoint(800,170), wxDefaultSize, 0, wxDefaultValidator, "");


    DirPickerCtrl1->SetPath(outputFilesPath);    
//    Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SimFluUIFrame::OnButton8Click);
    wxBoxSizer* hboxD1 = new wxBoxSizer(wxHORIZONTAL);
    hboxD1->Add(Button8,0, wxALL | wxALIGN_CENTER_VERTICAL , 10);
    hboxD1->Add(Button9,0, wxALL | wxALIGN_CENTER_VERTICAL , 10);

    wxBoxSizer* hboxD = new wxBoxSizer(wxVERTICAL);
    hboxD->Add(StaticText10,0, wxALL | wxALIGN_CENTER_VERTICAL, 10);
    hboxD->Add(DirPickerCtrl1,0, wxEXPAND | wxALL| wxALIGN_CENTER_VERTICAL, 10);
    hboxD->Add(StaticText11,0, wxALL | wxALIGN_CENTER_VERTICAL, 10);
    hboxD->Add(hboxD1,0, wxALL | wxALIGN_CENTER_VERTICAL | wxALIGN_RIGHT | wxRIGHT , 0);
 //   hboxD->Add(StaticText11,0, wxALL | wxALIGN_CENTER_VERTICAL, 10);
    Dialog1->SetSizer(hboxD);
    Dialog1->Centre();

    Dialog1->Fit();

//    Dialog1->ShowModal();

	if (Dialog1->ShowModal() == wxID_CANCEL){
		return;
	} 
    #ifdef _WIN32
	   outputFilesPath = DirPickerCtrl1->GetPath().ToStdString()+'\\'; 
    #else
       outputFilesPath = DirPickerCtrl1->GetPath().ToStdString()+'/'; 
    #endif
	Dialog1->Destroy();
//    TextCtrl3->Clear();
//    wxStreamToTextRedirector redirect(TextCtrl3);
//    Notebook1->ChangeSelection(8);


	// wxString outputFilesPath_temp = wxDirSelector("Choose a folder to save output files",temp);
 //    if (outputFilesPath_temp==wxEmptyString){
 //    	outputFilesPath_temp = temp;
 //    	MessageDialog3->SetMessage("Running is cancelled!");
 //        MessageDialog3->ShowModal();
 //    	return;
 //    }
 //   outputFilesPath = outputFilesPath_temp.ToStdString() + "\\";

//    outputFilesPath = DirPickerCtrl1->GetPath().ToStdString()+'\\';
//    wxEventBlocker blocker(this, wxEVT_ANY);
//    cancelled = false;
    Params* pars = new Params();
    long num;double num1;
    pars->inputFile = inputfilename;
    pars->SimTitle = TextCtrl1->GetValue();
    TextCtrl5->GetValue().ToLong(&num);pars->NSim = num;
    TextCtrl4->GetValue().ToLong(&num);pars->RandomSeed = num;
//    cout << pars->RandomSeed;

    #ifdef _WIN32
        pars->outputFilesPath =  outputFilesPath + "\\";
    #else
        pars->outputFilesPath =  outputFilesPath + "/";
    #endif
    pars->allOrNone = RadioButton1->GetValue();
    pars->InputsReport = CheckBox2->GetValue();
    pars->VReport = CheckBox3->GetValue();
    pars->DReportPerson = CheckBox4->GetValue();
    pars->CReport = CheckBox5->GetValue();
    pars->PReport = CheckBox1->GetValue();
    pars->IReportDaily = CheckBox7->GetValue();
    pars->MReportSim = CheckBox6->GetValue();
    pars->SReportSim = CheckBox8->GetValue();
    pars->DReportSum = CheckBox9->GetValue();
    pars->MReportSum = CheckBox10->GetValue();
    pars->YReportSum = CheckBox12->GetValue();
    pars->PopReport = CheckBox11->GetValue();
    pars->addTimeStampToFileNames = CheckBox13->GetValue();

    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    stringstream ss, ss1;
    std::tm * now1 = std::localtime ( &now_c );
    std::string pattern ("%Y-%m-%d_%H%M%S");
    std::locale loc;
    const std::time_put<char>& tmput = std::use_facet <std::time_put<char> > (loc);
    tmput.put (ss1, ss1, ' ', now1, pattern.data(), pattern.data()+pattern.length());
    pars->timeStamp = ss1.str();

    TextCtrl2->GetValue().ToLong(&num);pars->FYear = num;
    pars->FMonth = SpinCtrl4->GetValue();
    pars->NMonths = SpinCtrl1->GetValue();
    pars->NStrata = SpinCtrl3->GetValue();
    pars->N = (int*) malloc(pars->NStrata * sizeof (int));
    pars->PopSize = 0;
    for (int i = 1; i <= pars->NStrata; i++) {
        Grid1->GetCellValue(0,i-1).ToLong(&num);pars->N[i - 1] = num;
        pars->PopSize += pars->N[i - 1];
    }
    pars->probX1 = (float*) malloc(pars->NStrata * sizeof (float));
    for (int i = 1; i <= pars->NStrata; i++) {
        Grid1->GetCellValue(1,i-1).ToDouble(&num1);pars->probX1[i-1] = num1;
    }
    pars->probU1_X1 = (float*) malloc(pars->NStrata * sizeof (float));
    for (int i = 1; i <= pars->NStrata; i++) {
        Grid1->GetCellValue(2,i-1).ToDouble(&num1);pars->probU1_X1[i-1] = num1;
    }
    pars->probU1_X0 = (float*) malloc(pars->NStrata * sizeof (float));
    for (int i = 1; i <= pars->NStrata; i++) {
        Grid1->GetCellValue(3,i-1).ToDouble(&num1);pars->probU1_X0[i-1] = num1;
    }
    pars->VacCov = (float****) malloc(2 * sizeof (float*));
    for (int i = 0; i < 2; i++) {
        pars->VacCov[i] = (float***) malloc(2 * sizeof (float*));
        for (int j = 0; j < 2; j++) {
            pars->VacCov[i][j] = (float**) malloc((pars->NMonths + 1) * sizeof (float*));
            for (int k = 0; k <= pars->NMonths; k++) {
                pars->VacCov[i][j][k] = (float*) malloc(pars->NStrata * sizeof (float));
            }
        }
    }
    for (int i = 0; i <= pars->NMonths; i++) {
        for (int j = 1; j <= pars->NStrata; j++) {
            Grid2->GetCellValue(i,j-1).ToDouble(&num1);pars->VacCov[1][1][i][j - 1] = num1;
        }
    }
    pars->vacMultiplierX0 = (float*) malloc(pars->NStrata * sizeof (float));
    for (int i = 1; i <= pars->NStrata; i++) {
        Grid2->GetCellValue(pars->NMonths+1,i-1).ToDouble(&num1);pars->vacMultiplierX0[i-1] = num1;
    }
    pars->vacMultiplierU0 = (float*) malloc(pars->NStrata * sizeof (float));
    for (int i = 1; i <= pars->NStrata; i++) {
        Grid2->GetCellValue(pars->NMonths+2,i-1).ToDouble(&num1);pars->vacMultiplierU0[i-1] = num1;
    }
    for (int i = 0; i <= pars->NMonths; i++) {
        try {
            for (int j = 0; j < pars->NStrata; j++) {
                if ((pars->VacCov[0][1][i][j] = pars->VacCov[1][1][i][j] * pars->vacMultiplierX0[j]) > 1.) {
                    stringstream e;
                    e << "VacCov > 1 for M = " << i << ", K = " << j+1 << ", X = 0, U = 1";
                    throw e.str();
                }

                if ((pars->VacCov[1][0][i][j] = pars->VacCov[1][1][i][j] * pars->vacMultiplierU0[j]) > 1.) {
                    stringstream e;
                    e << "VacCov > 1 for M = " << i << ", K = " << j+1 << ", X = 1, U = 0";
                    throw e.str();
                }

                if ((pars->VacCov[0][0][i][j] = pars->VacCov[1][1][i][j] * pars->vacMultiplierX0[j] * pars->vacMultiplierU0[j]) > 1.) {
                    stringstream e;
                    e << "VacCov > 1 for M = " << i << ", K = " << j+1 << ", X = 0, U = 0";
                    throw e.str();
                }
            }
        }
        catch (string e) {
            cout << "\n" << e << "\nExiting!" << endl;
            cin.get();
            exit(1);
        }
    }
    TextCtrl6->GetValue().ToLong(&num);pars->NInit = num;
    pars->C = (int*) malloc(pars->NStrata * sizeof (int));
    for (int i = 1; i <= pars->NStrata; i++) {
        Grid3->GetCellValue(pars->NStrata,i-1).ToLong(&num);pars->C[i - 1] = num;
    }

    pars->Rho = (float**) malloc(pars->NStrata * sizeof (float*));
    for (int i = 0; i < pars->NStrata; i++) {
        pars->Rho[i] = (float*) malloc(pars->NStrata * sizeof (float));
    }
    for (int i = 0; i < pars->NStrata; i++) {
        for (int j = 1; j <= pars->NStrata; j++) {
            Grid3->GetCellValue(i,j-1).ToDouble(&num1);pars->Rho[i][j - 1] = num1;
        }
    }

    // Latent period for infection
    pars->Latent = (int*) malloc(pars->NStrata * sizeof (int));
    for (int i = 1; i <= pars->NStrata; i++) {
        Grid4->GetCellValue(0,i-1).ToLong(&num);pars->Latent[i - 1] = num;
    }

    // Infectious period
    pars->Infectious = (int*) malloc(pars->NStrata * sizeof (int));
    for (int i = 1; i <= pars->NStrata; i++) {
        Grid4->GetCellValue(1,i-1).ToLong(&num);pars->Infectious[i - 1] = num;
    }

    // Probability that infected person becomes ill
    pars->Probinfill = (float*) malloc(pars->NStrata * sizeof (float));
    for (int i = 1; i <= pars->NStrata; i++) {
        Grid4->GetCellValue(2,i-1).ToDouble(&num1);pars->Probinfill[i - 1] = num1;
    }

    // Relative infectiousness
    pars->Rinfxill = (float*) malloc(pars->NStrata * sizeof (float));
    for (int i = 1; i <= pars->NStrata; i++) {
        Grid4->GetCellValue(3,i-1).ToDouble(&num1);pars->Rinfxill[i - 1] = num1;
    }

    // Transmission probabilities unvac
    pars->Pai = (float***) malloc(2 * sizeof (float*));
    for (int i = 0; i < 2; i++) {
        pars->Pai[i] = (float**) malloc(pars->NMonths * sizeof (float*));
        for (int j = 0; j < pars->NMonths; j++) {
            pars->Pai[i][j] = (float*) malloc(pars->NStrata * sizeof (float));
        }
    }
    for (int i = 0; i < pars->NMonths; i++) {
        for (int j = 1; j <= pars->NStrata; j++) {
            Grid5->GetCellValue(i,j-1).ToDouble(&num1);pars->Pai[1][i][j - 1] = num1;
        }
    }

    pars->transProbMultiplierX0 = (float*) malloc(pars->NStrata * sizeof (float));
    for (int i = 1; i <= pars->NStrata; i++) {
        Grid5->GetCellValue(pars->NMonths,i-1).ToDouble(&num1);pars->transProbMultiplierX0[i-1] = num1;
    }

    for (int i = 0; i < pars->NMonths; i++) {
        for (int j = 0; j < pars->NStrata; j++) {
            try {
                if ((pars->Pai[0][i][j] = pars->Pai[1][i][j] * pars->transProbMultiplierX0[j]) > 1.) {
                    stringstream e;
                    e << "Pai > 1 for M = " << i+1 << ", K = " << j+1 << ", X = 0";
                    throw e.str();
                }
            }
            catch (string e) {
                cout << "\n" << e << "\nExiting!" << endl;
                cin.get();
                exit(1);
            }
        }
    }





    // Vaccine efficacy
    pars->Phi = (float***) malloc(2 * sizeof (float*));
    for (int i = 0; i < 2; i++) {
        pars->Phi[i] = (float**) malloc(pars->NMonths * sizeof (float*));
        for (int j = 0; j < pars->NMonths; j++) {
            pars->Phi[i][j] = (float*) malloc(pars->NStrata * sizeof (float));
        }
    }


    for (int i = 0; i < pars->NMonths; i++) {
        for (int j = 1; j <= pars->NStrata; j++) {
            Grid6->GetCellValue(i,j-1).ToDouble(&num1);pars->Phi[1][i][j - 1] = num1;
            //if (!this->allOrNone)
            //    this->Phi[i][j - 1] = 1 - this->Phi[i][j - 1] / this->Pai[i][j - 1]; //new phi
        }
    }


    pars->vacEfficacyMultiplierX0 = (float*) malloc(pars->NStrata * sizeof (float));
    for (int i = 1; i <= pars->NStrata; i++) {
        Grid6->GetCellValue(pars->NMonths,i-1).ToDouble(&num1);pars->vacEfficacyMultiplierX0[i-1] = num1;
    }

    for (int i = 0; i < pars->NMonths; i++) {
        for (int j = 0; j < pars->NStrata; j++) {
            try {
                if ((pars->Phi[0][i][j] = pars->Phi[1][i][j] * pars->vacEfficacyMultiplierX0[j]) > 1.) {
                    stringstream e;
                    e << "Phi > 1 for M = " << i + 1 << ", K = " << j+1 << ", X = 0";
                    throw e.str();
                }
            }
            catch (string e) {
                cout << "\n" << e << "\nExiting!" << endl;
                cin.get();
                exit(1);
            }
        }
    }

    // Length of non-influenza ARI episode
    pars->LARI = (int*) malloc(pars->NStrata * sizeof (int));
    for (int i = 1; i <= pars->NStrata; i++) {
        Grid7->GetCellValue(0,i-1).ToLong(&num);pars->LARI[i - 1] = num;
    }


    // Probability of non-influenza ARI
    pars->probARI = (float**) malloc(pars->NMonths * sizeof (float*));
    for (int i = 0; i < pars->NMonths; i++) {
        pars->probARI[i] = (float*) malloc(pars->NStrata * sizeof (float));
    };
    for (int i = 0; i < pars->NMonths; i++) {
        for (int j = 1; j <= pars->NStrata; j++) {
            Grid7->GetCellValue(i+1,j-1).ToDouble(&num1);pars->probARI[i][j - 1] = num1;
        }
    }


    // Multiplier to probARI for vaccinated/protected humans
    pars->ariMultiplier_Vac = (float*) malloc(pars->NStrata * sizeof (float));
    for (int i = 1; i <= pars->NStrata; i++) {
        Grid7->GetCellValue(pars->NMonths+1,i-1).ToDouble(&num1);
        pars->ariMultiplier_Vac[i - 1] = num1;
    }

    // Multiplier to probARI for X=0
    pars->ariMultiplier_X0 = (float*) malloc(pars->NStrata * sizeof (float));
    for (int i = 1; i <= pars->NStrata; i++) {
        Grid7->GetCellValue(pars->NMonths+2,i-1).ToDouble(&num1);
        pars->ariMultiplier_X0[i - 1] = num1;
    }

    // Probability of clinic visit for symptomatic influenza (FARI)
    pars->probVisit_FARI = (float*) malloc(pars->NStrata * sizeof (float));
    for (int i = 1; i <= pars->NStrata; i++) {
        Grid20->GetCellValue(0,i-1).ToDouble(&num1);pars->probVisit_FARI[i - 1] = num1;
    }

	// Multiplier to FARI clinic visit probability for vaccinated or protected humans
    pars->visitFARIMultiplier_Vac = (float*) malloc(pars->NStrata * sizeof (float));
    for (int i = 1; i <= pars->NStrata; i++) {
        Grid20->GetCellValue(1,i-1).ToDouble(&num1);pars->visitFARIMultiplier_Vac[i - 1] = num1;
    }

 	// Multiplier to FARI clinic visit probability for X=0
    pars->visitFARIMultiplier_X0 = (float*) malloc(pars->NStrata * sizeof (float));
    for (int i = 1; i <= pars->NStrata; i++) {
        Grid20->GetCellValue(2,i-1).ToDouble(&num1);pars->visitFARIMultiplier_X0[i - 1] = num1;
    }

	// Multiplier to FARI clinic visit probability for U=0
    pars->visitFARIMultiplier_U0 = (float*) malloc(pars->NStrata * sizeof (float));
    for (int i = 1; i <= pars->NStrata; i++) {
        Grid20->GetCellValue(3,i-1).ToDouble(&num1);pars->visitFARIMultiplier_U0[i - 1] = num1;
    }

 	// Probability of clinic visit for NFARI
    pars->probVisit_NFARI = (float*) malloc(pars->NStrata * sizeof (float));
    for (int i = 1; i <= pars->NStrata; i++) {
        Grid20->GetCellValue(4,i-1).ToDouble(&num1);pars->probVisit_NFARI[i - 1] = num1;
    }

	// Multiplier to NFARI clinic visit probability for vaccinated or protected humans
    pars->visitNFARIMultiplier_Vac = (float*) malloc(pars->NStrata * sizeof (float));
    for (int i = 1; i <= pars->NStrata; i++) {
        Grid20->GetCellValue(5,i-1).ToDouble(&num1);pars->visitNFARIMultiplier_Vac[i - 1] = num1;
    }
    // Multiplier to clinic visit probability NFARI for X=0
    pars->visitNFARIMultiplier_X0 = (float*) malloc(pars->NStrata * sizeof (float));
    for (int i = 1; i <= pars->NStrata; i++) {
        Grid20->GetCellValue(6,i-1).ToDouble(&num1);pars->visitNFARIMultiplier_X0[i - 1] = num1;
    }

    // Multiplier to clinic visit probability NFARI U=1
    pars->visitNFARIMultiplier_U0 = (float*) malloc(pars->NStrata * sizeof (float));
    for (int i = 1; i <= pars->NStrata; i++) {
        Grid20->GetCellValue(7,i-1).ToDouble(&num1);pars->visitNFARIMultiplier_U0[i - 1] = num1;
    }
/*
    Thread1 = new SimFluUIThread(this,pars);


    if ( Thread1->Run() != wxTHREAD_NO_ERROR ){
        wxLogError("Can't create the thread!");        
    //    delete Thread1;        
        Thread1 = NULL;    
    }
    
*/  
    wxGenericProgressDialog*  ProgressDialog1 = new wxGenericProgressDialog(_("Progress"),_("Preparing"),pars->NSim,NULL,wxPD_CAN_ABORT|wxPD_ELAPSED_TIME);
    Simulator* current = new Simulator(*pars,ProgressDialog1);
    //Simulator current = Simulator(*pars);
//    cout << "\nNUMBER OF PEOPLE: " << *(current.getParams().N) << endl;
//    cout << "\nNUMBER OF SIMULATION: " << current.getParams().NSim <<  endl;
    current->Start();
    string prefix = current->spaceToUnderscore(pars->SimTitle); 
	InputsReportFile = current->getSimPar().InputsReportFile;
	VReportFile = current->getSimPar().VReportFile;
	DReportPersonFile = current->getSimPar().DReportPersonFile;
	CReportFile = current->getSimPar().CReportFile;
	PReportFile = current->getSimPar().PReportFile;
	IReportDailyFile = current->getSimPar().IReportDailyFile;
	MReportSimFile = current->getSimPar().MReportSimFile;
	SReportSimFile = current->getSimPar().SReportSimFile;
	DReportSummaryFile= current->getSimPar().DReportSummaryFile;
	MReportSumFile= current->getSimPar().MReportSumFile;
	YReportSumFile = current->getSimPar().YReportSumFile;
	PopReportFile=current->getSimPar().PopReportFile;

    delete current;current = NULL;
    ProgressDialog1->Destroy();
    delete ProgressDialog1;ProgressDialog1=NULL;
    delete pars;pars = NULL;
}


void SimFluUIFrame::OnClose1(wxCloseEvent& event)
{

}

void SimFluUIFrame::OnNotebook2PageChanged(wxNotebookEvent& event)
{
    if( Notebook2->GetSelection()==1 ) this->ViewResults();
    if( Notebook2->GetSelection()==0 ){
        while( Notebook3->GetPageCount() > 0 ) Notebook3->RemovePage(0);
    //    TextCtrl3->Clear();
    }
}


void SimFluUIFrame::OnNotebook3PageChanged(wxNotebookEvent& event)
{
    if( (Notebook3->GetCurrentPage()==Panel15 && Grid8->GetNumberRows()>=1000) ||
        (Notebook3->GetCurrentPage()==Panel16 && Grid9->GetNumberRows()>=1000) ||
        (Notebook3->GetCurrentPage()==Panel17 && Grid10->GetNumberRows()>=1000) ||
        (Notebook3->GetCurrentPage()==Panel18 && Grid11->GetNumberRows()>=1000) ||
        (Notebook3->GetCurrentPage()==Panel19 && Grid12->GetNumberRows()>=1000) ||
        (Notebook3->GetCurrentPage()==Panel20 && Grid13->GetNumberRows()>=1000) ||
        (Notebook3->GetCurrentPage()==Panel21 && Grid14->GetNumberRows()>=1000) ||
        (Notebook3->GetCurrentPage()==Panel22 && Grid15->GetNumberRows()>=1000) ||
        (Notebook3->GetCurrentPage()==Panel23 && Grid16->GetNumberRows()>=1000) ||
        (Notebook3->GetCurrentPage()==Panel24 && Grid17->GetNumberRows()>=1000) ||
        (Notebook3->GetCurrentPage()==Panel25 && Grid18->GetNumberRows()>=1000) ||
        (Notebook3->GetCurrentPage()==Panel26 && Grid19->GetNumberRows()>=1000) ){
        MessageDialog2->SetMessage("File has more than 1000 lines! \nOnly first 1000 lines are presented.");
        MessageDialog2->ShowModal();
    }
}
void SimFluUIFrame::ViewResults()
{
//    wxStreamToTextRedirector redirect(TextCtrl3);

    string title(TextCtrl1->GetValue());
    if(title==""){
    //    Notebook1->ChangeSelection(8);
        MessageDialog3->SetMessage("No Output Files!");
        MessageDialog3->ShowModal(); 
    //    cout<<"Invalid Simulation Name!"<<endl;
        return;
    }
    while(Grid8->GetNumberRows()>1) Grid8->DeleteRows();
    while(Grid9->GetNumberRows()>1) Grid9->DeleteRows();
    while(Grid10->GetNumberRows()>1) Grid10->DeleteRows();
    while(Grid11->GetNumberRows()>1) Grid11->DeleteRows();
    while(Grid12->GetNumberRows()>1) Grid12->DeleteRows();
    while(Grid13->GetNumberRows()>1) Grid13->DeleteRows();
    while(Grid14->GetNumberRows()>1) Grid14->DeleteRows();
    while(Grid15->GetNumberRows()>1) Grid15->DeleteRows();
    while(Grid16->GetNumberRows()>1) Grid16->DeleteRows();
    while(Grid17->GetNumberRows()>1) Grid17->DeleteRows();
    while(Grid18->GetNumberRows()>1) Grid18->DeleteRows();
    while(Grid19->GetNumberRows()>1) Grid19->DeleteRows();

 //   Notebook3->GetPage(1)->Show(false);
    wxString inputs_report, creport, dreport, ireport, preport, vreport, mreport, sreport, mreports, yreport, dreports, popreport;
    	
    if ( CheckBox13->GetValue() == false ){
    	inputs_report = prefix + "_Inputs_and_Calculated_Parameters.csv";
    	vreport = prefix + "_Vaccination.csv";
    	dreport = prefix + "_Detailed.csv";
    	creport = prefix + "_Contact_Report.csv";
    	preport = prefix + "_Prevelance.csv";
    	ireport = prefix + "_Incidence_Daily_each_Sim.csv";
    	mreport = prefix + "_Incidence_Monthly_each_Sim.csv";
    	sreport = prefix + "_Incidence_Season_each_Sim.csv";
    	dreports= prefix + "_Incidence_Daily_overall.csv";
    	mreports= prefix + "_Incidence_Monthly_overall.csv";
    	yreport = prefix + "_Incidence_Season_overall.csv";
    	popreport=prefix + "_Outcomes_File.csv";
    }else{
		inputs_report = InputsReportFile;
    	vreport = VReportFile;
    	dreport = DReportPersonFile;;
    	creport = CReportFile;
    	preport = PReportFile;
    	ireport = IReportDailyFile;
    	mreport = MReportSimFile;
    	sreport = SReportSimFile;;
    	dreports= DReportSumFile;
    	mreports= MReportSumFile;
    	yreport = YReportSumFile;
    	popreport=PopReportFile;
    }
    string chute;     
    ifstream fin_inputs(outputFilesPath + inputs_report);
    if(CheckBox2->GetValue()){
        if(!fin_inputs.is_open()){
            string show;
            show="Inputs_and_Calculated_Parameters.csv doesn't exist!";
            MessageDialog2->SetMessage(show);
            MessageDialog2->ShowModal();
        }else{
            Notebook3->AddPage(Panel15, _("Inputs_and_Calculated_Parameters"), false);
    //        cout << "test1" << Notebook2 << " " << Panel14 << " " << Notebook3 << " " << Panel15 << " " << Grid8 << endl;
            int i=0;
            safeGetline(fin_inputs,chute);
            Grid8->SetCellValue(i,0,chute);
            Grid8->AppendRows(1);
            i++;
        	getline(fin_inputs,chute,',');
            Grid8->SetCellValue(i,0,chute);
            safeGetline(fin_inputs,chute);
            Grid8->SetCellValue(i,1,chute);
            Grid8->AppendRows(1);
            i++;
            safeGetline(fin_inputs,chute);
            Grid8->AppendRows(1);
            i++;
            for (;i<6;i++){
                getline(fin_inputs,chute,',');
                Grid8->SetCellValue(i,0,chute);
                safeGetline(fin_inputs,chute);
                Grid8->SetCellValue(i,1,chute);
                Grid8->AppendRows(1);
            }
            safeGetline(fin_inputs,chute);
            Grid8->SetCellValue(i,0,chute);
            Grid8->AppendRows(1);
            i++;
            for (;i<24;i++){
                getline(fin_inputs,chute,',');
                Grid8->SetCellValue(i,0,chute);
                safeGetline(fin_inputs,chute);
                Grid8->SetCellValue(i,1,chute);
                Grid8->AppendRows(1);
            }
            int strata=atoi(Grid8->GetCellValue(23,1));
            int month=atoi(Grid8->GetCellValue(22,1));            
            if (strata>1){
                for (int k=0;k<strata-1;k++){
                    Grid8->AppendCols(1);
                }
            }
            for (int j=0;j<strata;j++){
            	getline(fin_inputs,chute,',');
            	Grid8->SetCellValue(i,j,chute);
            }            
            safeGetline(fin_inputs,chute);
            Grid8->SetCellValue(i,strata,chute);
            Grid8->AppendRows(1);
            i++;            
            getline(fin_inputs,chute,',');
            Grid8->SetCellValue(i,0,chute);
            safeGetline(fin_inputs,chute);
            Grid8->SetCellValue(i,1,chute);
            Grid8->AppendRows(1);
            i++;

            // safeGetline(fin_inputs,chute);
            // Grid8->SetCellValue(i,0,chute);
            // Grid8->AppendRows(1);
            // i++;
            // for (int j=0;j<strata+1;j++,i++){
            //     getline(fin_inputs,chute,',');
            //     Grid8->SetCellValue(i,0,chute);
            //     safeGetline(fin_inputs,chute);
            //     Grid8->SetCellValue(chute,i,1);
            //     Grid8->AppendRows(1);
            // }
            // safeGetline(fin_inputs,chute);
            // Grid8->AppendRows(1);
            // i++;

            for (int k=0;k<3;k++){
                // safeGetline(fin_inputs,chute);
                // Grid8->SetCellValue(i,0,chute);
                // Grid8->AppendRows(1);
                // i++;
                for (int j=0;j<strata;j++){
                    getline(fin_inputs,chute,',');
                    Grid8->SetCellValue(i,j,chute);
                    // safeGetline(fin_inputs,chute);
                    // Grid8->SetCellValue(chute,i,1);
                    // Grid8->AppendRows(1);
                }
                safeGetline(fin_inputs,chute);
                Grid8->SetCellValue(i,strata,chute);
                Grid8->AppendRows(1);
                i++;
            }
            safeGetline(fin_inputs,chute);
            Grid8->SetCellValue(i,0,chute);
            Grid8->AppendRows(1);
            i++;
            for (int k=0;k<month+3;k++,i++){
                for (int j=0;j<strata;j++){
                    getline(fin_inputs,chute,',');
                    Grid8->SetCellValue(i,j,chute);
                }
                safeGetline(fin_inputs,chute);
                Grid8->SetCellValue(i,strata,chute);
                Grid8->AppendRows(1);
            }
            // safeGetline(fin_inputs,chute);
            // Grid8->SetCellValue(i,0,chute);
            // Grid8->AppendRows(1);
            // i++;


            // for (int k=0;k<2;k++){
            //     safeGetline(fin_inputs,chute);
            //     Grid8->SetCellValue(i,0,chute);
            //     Grid8->AppendRows(1);
            //     i++;
            //     for (int j=0;j<strata;j++,i++){
            //         getline(fin_inputs,chute,',');
            //         Grid8->SetCellValue(i,0,chute);
            //         safeGetline(fin_inputs,chute);
            //         Grid8->SetCellValue(chute,i,1);
            //         Grid8->AppendRows(1);
            //     }
            //     safeGetline(fin_inputs,chute);
            //     Grid8->AppendRows(1);
            //     i++;
            // }
            for (int m=0;m<3;m++){
                safeGetline(fin_inputs,chute);
                Grid8->SetCellValue(i,0,chute);
                Grid8->AppendRows(1);
                i++;
                for (int k=0;k<month+1;k++){
                    for (int j=0;j<strata;j++){
                        getline(fin_inputs,chute,',');
                        Grid8->SetCellValue(i,j,chute);
                    }
                    safeGetline(fin_inputs,chute);
                    Grid8->SetCellValue(i,strata,chute);
                    Grid8->AppendRows(1);
                    i++;
                }
                // safeGetline(fin_inputs,chute);
                // Grid8->AppendRows(1);

            }
            getline(fin_inputs,chute,',');
            Grid8->SetCellValue(i,0,chute);
            safeGetline(fin_inputs,chute);
            Grid8->SetCellValue(i,1,chute);
            Grid8->AppendRows(1);
            i++;
            // safeGetline(fin_inputs,chute);
            // Grid8->AppendRows(1);
            // i++;
            // safeGetline(fin_inputs,chute);
            // Grid8->SetCellValue(i,0,chute);
            // Grid8->AppendRows(1);
            // i++;
            for (int j=0;j<strata;j++){
                getline(fin_inputs,chute,',');
                Grid8->SetCellValue(i,j,chute);
            }
            safeGetline(fin_inputs,chute);
            Grid8->SetCellValue(i,strata,chute);
            Grid8->AppendRows(1);
            i++;
            safeGetline(fin_inputs,chute);
            Grid8->SetCellValue(i,0,chute);
            Grid8->AppendRows(1);
            i++;
            // safeGetline(fin_inputs,chute);
            // Grid8->SetCellValue(i,0,chute);
            // Grid8->AppendRows(1);
            // i++;
            for (int m=0;m<strata+4;m++){
                for (int j=0;j<strata;j++){
                    getline(fin_inputs,chute,',');
                    Grid8->SetCellValue(i,j,chute);
                }
                safeGetline(fin_inputs,chute);
                Grid8->SetCellValue(i,strata,chute);
                Grid8->AppendRows(1);
                i++;
            }
            safeGetline(fin_inputs,chute);
            Grid8->SetCellValue(i,0,chute);
            Grid8->AppendRows(1);
            i++;

            for (int k=0;k<month+1;k++){
                // safeGetline(fin_inputs,chute);
                // Grid8->SetCellValue(i,0,chute);
                // Grid8->AppendRows(1);
                // i++;
                for (int j=0;j<strata;j++){
                    getline(fin_inputs,chute,',');
                    Grid8->SetCellValue(i,j,chute);
                }
                safeGetline(fin_inputs,chute);
                Grid8->SetCellValue(i,strata,chute);
                Grid8->AppendRows(1);
                i++;
                // safeGetline(fin_inputs,chute);
                // Grid8->AppendRows(1);
                // i++;
            }
            safeGetline(fin_inputs,chute);
            Grid8->SetCellValue(i,0,chute);
            Grid8->AppendRows(1);
            i++;
            for (int k=0;k<month;k++,i++){
                for (int j=0;j<strata;j++){
                    getline(fin_inputs,chute,',');
                    Grid8->SetCellValue(i,j,chute);
                }
                safeGetline(fin_inputs,chute);
                Grid8->SetCellValue(i,strata,chute);
                Grid8->AppendRows(1);
            }
            // safeGetline(fin_inputs,chute);
            // Grid8->AppendRows(1);
            // i++;

            safeGetline(fin_inputs,chute);
            Grid8->SetCellValue(i,0,chute);
            Grid8->AppendRows(1);
            i++;
            for (int k=0;k<month+1;k++,i++){
                for (int j=0;j<strata;j++){
                    getline(fin_inputs,chute,',');
                    Grid8->SetCellValue(i,j,chute);
                }
                safeGetline(fin_inputs,chute);
                Grid8->SetCellValue(i,strata,chute);
                Grid8->AppendRows(1);
            }

            // for (int j=0;j<strata;j++,i++){
            //     getline(fin_inputs,chute,',');
            //     Grid8->SetCellValue(i,0,chute);
            //     safeGetline(fin_inputs,chute);
            //     Grid8->SetCellValue(chute,i,1);
            //     Grid8->AppendRows(1);
            // }
            // safeGetline(fin_inputs,chute);
            // Grid8->AppendRows(1);
            // i++;

            safeGetline(fin_inputs,chute);
            Grid8->SetCellValue(i,0,chute);
            Grid8->AppendRows(1);
            i++;
            for (int k=0;k<month;k++,i++){
                for (int j=0;j<strata;j++){
                    getline(fin_inputs,chute,',');
                    Grid8->SetCellValue(i,j,chute);
                }
                safeGetline(fin_inputs,chute);
                Grid8->SetCellValue(i,strata,chute);
                Grid8->AppendRows(1);
            }
            // safeGetline(fin_inputs,chute);
            // Grid8->AppendRows(1);
            // i++;

            safeGetline(fin_inputs,chute);
            Grid8->SetCellValue(i,0,chute);
            Grid8->AppendRows(1);
            i++;
            for (int k=0;k<month;k++,i++){
                for (int j=0;j<strata;j++){
                    getline(fin_inputs,chute,',');
                    Grid8->SetCellValue(i,j,chute);
                }
                safeGetline(fin_inputs,chute);
                Grid8->SetCellValue(i,strata,chute);
                Grid8->AppendRows(1);
            }
            // safeGetline(fin_inputs,chute);
            // Grid8->AppendRows(1);
            // i++;

            // safeGetline(fin_inputs,chute);
            // Grid8->SetCellValue(i,0,chute);
            // Grid8->AppendRows(1);
            // i++;
            // for (int j=0;j<strata;j++,i++){
            //     getline(fin_inputs,chute,',');
            //     Grid8->SetCellValue(i,0,chute);
            //     safeGetline(fin_inputs,chute);
            //     Grid8->SetCellValue(chute,i,1);
            //     Grid8->AppendRows(1);
            // }
            // safeGetline(fin_inputs,chute);
            // Grid8->AppendRows(1);
            // i++;

            safeGetline(fin_inputs,chute);
            Grid8->SetCellValue(i,0,chute);
            Grid8->AppendRows(1);
            i++;
            for (int k=0;k<month;k++,i++){
                for (int j=0;j<strata;j++){
                    getline(fin_inputs,chute,',');
                    Grid8->SetCellValue(i,j,chute);
                }
                safeGetline(fin_inputs,chute);
                Grid8->SetCellValue(i,strata,chute);
                Grid8->AppendRows(1);
            }
            // safeGetline(fin_inputs,chute);
            // Grid8->AppendRows(1);
            // i++;

            for (int j=0;j<strata;j++){
                getline(fin_inputs,chute,',');
                Grid8->SetCellValue(i,j,chute);
                // safeGetline(fin_inputs,chute);
                // Grid8->SetCellValue(chute,i,1);
                // Grid8->AppendRows(1);
            }
            safeGetline(fin_inputs,chute);
            Grid8->SetCellValue(i,strata,chute);
            Grid8->AppendRows(1);
            i++;

            safeGetline(fin_inputs,chute);
            Grid8->SetCellValue(i,0,chute);
            Grid8->AppendRows(1);
            i++;
            for (int k=0;k<month+1;k++,i++){
                for (int j=0;j<strata;j++){
                    getline(fin_inputs,chute,',');
                    Grid8->SetCellValue(i,j,chute);
                }
                safeGetline(fin_inputs,chute);
                Grid8->SetCellValue(i,strata,chute);
                Grid8->AppendRows(1);
            }
            // safeGetline(fin_inputs,chute);
            // Grid8->AppendRows(1);
            // i++;

            safeGetline(fin_inputs,chute);
            Grid8->SetCellValue(i,0,chute);
            Grid8->AppendRows(1);
            i++;
            for (int k=0;k<month+1;k++,i++){
                for (int j=0;j<strata;j++){
                    getline(fin_inputs,chute,',');
                    Grid8->SetCellValue(i,j,chute);
                }
                safeGetline(fin_inputs,chute);
                Grid8->SetCellValue(i,strata,chute);
                Grid8->AppendRows(1);
            }
            // safeGetline(fin_inputs,chute);
            // Grid8->AppendRows(1);
            // i++;

            safeGetline(fin_inputs,chute);
            Grid8->SetCellValue(i,0,chute);
            Grid8->AppendRows(1);
            i++;
            for (int k=0;k<month;k++,i++){
                for (int j=0;j<strata;j++){
                    getline(fin_inputs,chute,',');
                    Grid8->SetCellValue(i,j,chute);
                }
                safeGetline(fin_inputs,chute);
                Grid8->SetCellValue(i,strata,chute);
                Grid8->AppendRows(1);
            }
            // for (int j=0;j<strata;j++){
            //     getline(fin_inputs,chute,',');
            //     Grid8->SetCellValue(i,j,chute);
            // }
            // safeGetline(fin_inputs,chute);
            // Grid8->AppendRows(1);
            // i++;
            // safeGetline(fin_inputs,chute);
            // Grid8->AppendRows(1);
            // i++;

            safeGetline(fin_inputs,chute);
            Grid8->SetCellValue(i,0,chute);
            Grid8->AppendRows(1);
            i++;
            for (int k=0;k<month+24;k++,i++){
                for (int j=0;j<strata;j++){
                    getline(fin_inputs,chute,',');
                    Grid8->SetCellValue(i,j,chute);
                }
                safeGetline(fin_inputs,chute);
                Grid8->SetCellValue(i,strata,chute);
                Grid8->AppendRows(1);
            }
            // safeGetline(fin_inputs,chute);
            // Grid8->AppendRows(1);
            // i++;

            // safeGetline(fin_inputs,chute);
            // Grid8->SetCellValue(i,0,chute);
            // Grid8->AppendRows(1);
            // i++;
            // for (int j=0;j<strata;j++){
            //     getline(fin_inputs,chute,',');
            //     Grid8->SetCellValue(i,j,chute);
            // }
            // safeGetline(fin_inputs,chute);
            // Grid8->AppendRows(1);
            // i++;
            // safeGetline(fin_inputs,chute);
            // Grid8->AppendRows(1);
            // i++;

            // safeGetline(fin_inputs,chute);
            // Grid8->SetCellValue(i,0,chute);
            // Grid8->AppendRows(1);
            // i++;
            // for (int k=0;k<month;k++,i++){
            //     for (int j=0;j<strata;j++){
            //         getline(fin_inputs,chute,',');
            //         Grid8->SetCellValue(i,j,chute);
            //     }
            //     safeGetline(fin_inputs,chute);
            //     Grid8->AppendRows(1);
            // }
            // safeGetline(fin_inputs,chute);
            // Grid8->AppendRows(1);
            // i++;

            // safeGetline(fin_inputs,chute);
            // Grid8->SetCellValue(i,0,chute);
            // Grid8->AppendRows(1);
            // i++;
            // for (int j=0;j<strata;j++){
            //     getline(fin_inputs,chute,',');
            //     Grid8->SetCellValue(i,j,chute);
            // }
            // safeGetline(fin_inputs,chute);
            // Grid8->AppendRows(1);
            // i++;

            // safeGetline(fin_inputs,chute);
            // Grid8->SetCellValue(i,0,chute);
            // Grid8->AppendRows(1);
            // i++;
            // for (int k=0;k<month;k++,i++){
            //     for (int j=0;j<strata;j++){
            //         getline(fin_inputs,chute,',');
            //         Grid8->SetCellValue(i,j,chute);
            //     }
            //     safeGetline(fin_inputs,chute);
            //     Grid8->AppendRows(1);
            // }
            // safeGetline(fin_inputs,chute);
            // Grid8->AppendRows(1);
            // i++;

            // safeGetline(fin_inputs,chute);
            // Grid8->SetCellValue(i,0,chute);
            // Grid8->AppendRows(1);
            // i++;
            // for (int k=0;k<month;k++,i++){
            //     for (int j=0;j<strata;j++){
            //         getline(fin_inputs,chute,',');
            //         Grid8->SetCellValue(i,j,chute);
            //     }
            //     safeGetline(fin_inputs,chute);
            //     Grid8->AppendRows(1);
            // }
            // safeGetline(fin_inputs,chute);
            // Grid8->AppendRows(1);
            // i++;

            // for (int m=0;m<24;m++){
            //     safeGetline(fin_inputs,chute);
            //     Grid8->SetCellValue(i,0,chute);
            //     Grid8->AppendRows(1);
            //     i++;
            //     for (int j=0;j<strata;j++){
            //         getline(fin_inputs,chute,',');
            //         Grid8->SetCellValue(i,j,chute);
            //     }
            //     safeGetline(fin_inputs,chute);
            //     Grid8->AppendRows(1);
            //     i++;
            // }
            fin_inputs.close();
        }
    }

    ifstream fin_v(outputFilesPath + vreport);
    if(CheckBox3->GetValue()){
        if(!fin_v.is_open()){
           string show;
            show="Vaccination.csv doesn't exist!";
            MessageDialog2->SetMessage(show);
            MessageDialog2->ShowModal();
        }else{            
            Notebook3->AddPage(Panel16, _("Vaccination"), false);
            int i=0;
            safeGetline(fin_v,chute);
            while(!fin_v.eof()&&i<1000){
     //           Grid11->SetCellValue(i,0,chute);
                for(int j=0;j<8;j++){
                   getline(fin_v,chute,',');
                   Grid9->SetCellValue(i,j,chute);
                }
                safeGetline(fin_v,chute);
                Grid9->SetCellValue(i,8,chute);
                Grid9->AppendRows(1);
                i++;
            }
            fin_v.close();
        }
    }

    ifstream fin_d(outputFilesPath + dreport);
    if(CheckBox4->GetValue()){
        if(!fin_d.is_open()){
            string show;
            show="Detailed.csv doesn't exist!";
            MessageDialog2->SetMessage(show);
            MessageDialog2->ShowModal();
        }else{
            Notebook3->AddPage(Panel17, _("Detailed"), false);
            int i=0;
            safeGetline(fin_d,chute);
            while(!fin_d.eof()&&i<1000){
     //           Grid11->SetCellValue(i,0,chute);
                for(int j=0;j<15;j++){
                   getline(fin_d,chute,',');
                   Grid10->SetCellValue(i,j,chute);
                }
                safeGetline(fin_d,chute);
                Grid10->SetCellValue(i,15,chute);
                Grid10->AppendRows(1);
                i++;
            }
            fin_d.close();
        }
    }
    
    ifstream fin_c(outputFilesPath + creport);
    if(CheckBox5->GetValue()){
        if(!fin_c.is_open()){
            string show;
            show="Contact_Report.csv doesn't exist!";
            MessageDialog2->SetMessage(show);
            MessageDialog2->ShowModal();
        }else{
            Notebook3->AddPage(Panel18, _("Contact_Report"), false);
            int i=0;
            safeGetline(fin_c,chute);
            while(!fin_c.eof()&&i<1000){
     //           Grid11->SetCellValue(i,0,chute);
                for(int j=0;j<10;j++){
                   getline(fin_c,chute,',');
                   Grid11->SetCellValue(i,j,chute);
                }
                safeGetline(fin_c,chute);
                Grid11->SetCellValue(i,10,chute);
                Grid11->AppendRows(1);
                i++;
            }
            fin_c.close();
        }
    }

    ifstream fin_p(outputFilesPath + preport);
    if(CheckBox1->GetValue()){
        if(!fin_p.is_open()){
            string show;
            show="Prevelance.csv doesn't exist!";
            MessageDialog2->SetMessage(show);
            MessageDialog2->ShowModal();
        }else{
            Notebook3->AddPage(Panel19, _("Prevalance"), false);
            if (!RadioButton1->GetValue()){
                int i=0;
                safeGetline(fin_p,chute);
                while(!fin_p.eof()&&i<1000){
     //             Grid11->SetCellValue(i,0,chute);
                    for(int j=0;j<11;j++){
                        getline(fin_p,chute,',');
                        Grid12->SetCellValue(i,j,chute);
                    }
                    safeGetline(fin_p,chute);
                    Grid12->SetCellValue(i,11,chute);
                    Grid12->AppendRows(1);
                    i++;
                }
            }else{
                Grid12->DeleteCols(10,2);
                Grid12->SetColLabelValue(8,"P(INF|UNPROTECTED;X=0)");
                Grid12->SetColLabelValue(9,"P(INF|UNPROTECTED;X=1)");
                int i=0;
                safeGetline(fin_p,chute);
                while(!fin_p.eof()&&i<1000){
     //             Grid11->SetCellValue(i,0,chute);
                    for(int j=0;j<9;j++){
                        getline(fin_p,chute,',');
                        Grid12->SetCellValue(i,j,chute);
                    }
                    safeGetline(fin_p,chute);
                    Grid12->SetCellValue(i,9,chute);
                    Grid12->AppendRows(1);
                    i++;
                }
            }
            fin_p.close();
        }
    }
    
    ifstream fin_i(outputFilesPath + ireport);
    if(CheckBox7->GetValue()){
        if(!fin_i.is_open()){
            string show;
            show="Incidence_Daily_each_Sim.csv doesn't exist!";
            MessageDialog2->SetMessage(show);
            MessageDialog2->ShowModal();
        }else{
            Notebook3->AddPage(Panel20, _("Incidence_Daily_each_Sim"), false);
            int i=0;
            safeGetline(fin_i,chute);
            while(!fin_i.eof()&&i<1000){
     //           Grid11->SetCellValue(i,0,chute);
                for(int j=0;j<15;j++){
                   getline(fin_i,chute,',');
                   Grid13->SetCellValue(i,j,chute);
                }
                safeGetline(fin_i,chute);
                Grid13->SetCellValue(i,15,chute);
                Grid13->AppendRows(1);
                i++;
            }
            fin_i.close();
        }
    }
        
    ifstream fin_m(outputFilesPath + mreport);
    if(CheckBox6->GetValue()){
        if(!fin_m.is_open()){
            string show;
            show="Incidence_Monthly_each_Sim.csv doesn't exist!";
            MessageDialog2->SetMessage(show);
            MessageDialog2->ShowModal();
        }else{
            Notebook3->AddPage(Panel21, _("Incidence_Monthly_each_Sim"), false);
            int i=0;
            safeGetline(fin_m,chute);
            while(!fin_m.eof()&&i<1000){
     //           Grid11->SetCellValue(i,0,chute);
                for(int j=0;j<13;j++){
                   getline(fin_m,chute,',');
                   Grid14->SetCellValue(i,j,chute);
                }
                safeGetline(fin_m,chute);
                Grid14->SetCellValue(i,13,chute);
                Grid14->AppendRows(1);
                i++;
            }
            fin_m.close();
        }
    }
        
    ifstream fin_s(outputFilesPath + sreport);
    if(CheckBox8->GetValue()){
        if(!fin_s.is_open()){
            string show;
            show="Incidence_Monthly_each_Sim.csv doesn't exist!";
            MessageDialog2->SetMessage(show);
            MessageDialog2->ShowModal();
        }else{
            Notebook3->AddPage(Panel22, _("Incidence_Season_each_Sim"), false);
            int i=0;
            safeGetline(fin_s,chute);
            while(!fin_s.eof()&&i<1000){
     //           Grid11->SetCellValue(i,0,chute);
                for(int j=0;j<11;j++){
                   getline(fin_s,chute,',');
                   Grid15->SetCellValue(i,j,chute);
                }
                safeGetline(fin_s,chute);
                Grid15->SetCellValue(i,11,chute);
                Grid15->AppendRows(1);
                i++;
            }
            fin_s.close();
        }
    }
        
    ifstream fin_ds(outputFilesPath + dreports);
    if(CheckBox9->GetValue()){
        if(!fin_ds.is_open()){
            string show;
            show="Incidence_Daily_overall.csv doesn't exist!";
            MessageDialog2->SetMessage(show);
            MessageDialog2->ShowModal();
        }else{
            Notebook3->AddPage(Panel23, _("Incidence_Daily_overall"), false);
            int i=0;
            safeGetline(fin_ds,chute);
            while(!fin_ds.eof()&&i<1000){
     //           Grid11->SetCellValue(i,0,chute);
                for(int j=0;j<14;j++){
                   getline(fin_ds,chute,',');
                   Grid16->SetCellValue(i,j,chute);
                }
                safeGetline(fin_ds,chute);
                Grid16->SetCellValue(i,14,chute);
                Grid16->AppendRows(1);
                i++;
            }
            fin_ds.close();
        }
    }
    
    ifstream fin_ms(outputFilesPath + mreports);
    if(CheckBox10->GetValue()){
        if(!fin_ms.is_open()){
            string show;
            show="Incidence_Monthly_overall.csv doesn't exist!";
            MessageDialog2->SetMessage(show);
            MessageDialog2->ShowModal();
        }else{
            Notebook3->AddPage(Panel24, _("Incidence_Monthly_overall"), false);
            int i=0;
            safeGetline(fin_ms,chute);
            while(!fin_ms.eof()&&i<1000){
     //           Grid11->SetCellValue(i,0,chute);
                for(int j=0;j<12;j++){
                   getline(fin_ms,chute,',');
                   Grid17->SetCellValue(i,j,chute);
                }
                safeGetline(fin_ms,chute);
                Grid17->SetCellValue(i,12,chute);
                Grid17->AppendRows(1);
                i++;
            }
            fin_ms.close();
        }
    }
    
    ifstream fin_y(outputFilesPath + yreport);
    if(CheckBox12->GetValue()){
        if(!fin_y.is_open()){
            string show;
            show="Incidence_Season_overall.csv doesn't exist!";
            MessageDialog2->SetMessage(show);
            MessageDialog2->ShowModal();
        }else{
            Notebook3->AddPage(Panel25, _("Incidence_Season_overall"), false);
            int i=0;
            safeGetline(fin_y,chute);
            while(!fin_y.eof()&&i<1000){
     //           Grid11->SetCellValue(i,0,chute);
                for(int j=0;j<10;j++){
                   getline(fin_y,chute,',');
                   Grid18->SetCellValue(i,j,chute);
                }
                safeGetline(fin_y,chute);
                Grid18->SetCellValue(i,10,chute);
                Grid18->AppendRows(1);
                i++;
            }
            fin_y.close();
        }
    }
    
    ifstream fin_pop(outputFilesPath + popreport);
    if(CheckBox11->GetValue()){
        if(!fin_pop.is_open()){
            string show;
            show="Outcomes_File.csv doesn't exist!";
            MessageDialog2->SetMessage(show);
            MessageDialog2->ShowModal();
        }else{
            Notebook3->AddPage(Panel26, _("Outcomes-File"), false);
            int i=0;
            safeGetline(fin_pop,chute);
            while(!fin_pop.eof()&&i<1000){
     //           Grid11->SetCellValue(i,0,chute);
                for(int j=0;j<12;j++){
                   getline(fin_pop,chute,',');
                   Grid19->SetCellValue(i,j,chute);
                }
                safeGetline(fin_pop,chute);
                Grid19->SetCellValue(i,12,chute);
                Grid19->AppendRows(1);
                i++;
            }
            fin_pop.close();
        }
    }
    

     Notebook2->ChangeSelection(1);
     Notebook3->SetSelection(1);
//     cout << "test4" << " " << Notebook3->GetSelection() << " " << Notebook3->GetPageCount() << endl;
}

void SimFluUIFrame::OnButton4Click(wxCommandEvent& event)
{

    this->ViewResults();
}


void SimFluUIFrame::OnGrid20CellLeftClick(wxGridEvent& event)
{
}

void SimFluUIFrame::OnTextCtrl5Text(wxCommandEvent& event)
{
}

//void SimFluUIFrame::OnButton5Click(wxCommandEvent& event)
//{
 //   Disconnect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SimFluUIFrame::OnButton3Click);

//}

//void SimFluUIFrame::OnButton5Click1(wxCommandEvent& event)
//{
//    cancelled =  true;
//    Thread1->OnCancell();
//    Thread1->Delete();
//}

void SimFluUIFrame::OnButton6Click(wxCommandEvent& event)
{
    this->ShowMore();
}

void SimFluUIFrame::ShowMore()
{
// 	hbox2->Detach(CheckBox13);
// 	hbox2->Detach(CheckBox2);
// 	hbox2->Detach(CheckBox9);
// 	hbox2->Detach(CheckBox10);
// 	hbox2->Detach(CheckBox12);
// //	hbox2->Add(StaticText1,0, wxTOP | wxBOTTOM | wxEXPAND | wxALIGN_TOP, 15);
//     hbox2->Add(CheckBox13,0, wxTOP | wxBOTTOM | wxEXPAND | wxALIGN_TOP, 30);
//     hbox2->Add(CheckBox2,0, wxTOP | wxBOTTOM | wxEXPAND | wxALIGN_TOP, 15);
//     hbox2->Add(CheckBox3,0, wxTOP | wxBOTTOM | wxEXPAND | wxALIGN_TOP, 15);
//    hbox2->Add(CheckBox4,0, wxTOP | wxBOTTOM | wxEXPAND | wxALIGN_TOP, 15);
//    hbox2->Add(CheckBox5,0, wxTOP | wxBOTTOM | wxEXPAND | wxALIGN_TOP, 15);
//    hbox2->Add(CheckBox1,0, wxTOP | wxBOTTOM | wxEXPAND | wxALIGN_TOP, 15);
//    hbox2->Add(CheckBox7,0, wxTOP | wxBOTTOM | wxEXPAND | wxALIGN_TOP, 15);
//    hbox2->Add(CheckBox6,0, wxTOP | wxBOTTOM | wxEXPAND | wxALIGN_TOP, 15);
//    hbox2->Add(CheckBox8,0, wxTOP | wxBOTTOM | wxEXPAND | wxALIGN_TOP, 15);
//    hbox2->Add(CheckBox9,0, wxTOP | wxBOTTOM | wxEXPAND | wxALIGN_TOP, 15);
//    hbox2->Add(CheckBox10,0, wxTOP | wxBOTTOM | wxEXPAND | wxALIGN_TOP, 15);
//    hbox2->Add(CheckBox12,0, wxTOP | wxBOTTOM | wxEXPAND | wxALIGN_TOP, 15);
//    hbox2->Add(CheckBox11,0, wxTOP | wxBOTTOM | wxEXPAND | wxALIGN_TOP, 15);
 //   hbox2->Add(Button6,0, wxALIGN_CENTER | wxTOP | wxBOTTOM | wxALIGN_TOP, 15);
    hbox2->Hide(Button6); 
    hbox2->Show(Button7);
   hbox2->Show(CheckBox3);
   hbox2->Show(CheckBox4);
   hbox2->Show(CheckBox5);
   hbox2->Show(CheckBox1);
   hbox2->Show(CheckBox7);
   hbox2->Show(CheckBox6);
   hbox2->Show(CheckBox8);
   hbox2->Show(CheckBox11);
   hbox2->Hide(Panel30);
   hbox2->Hide(Panel31);
   hbox2->Hide(Panel32);
   hbox2->Hide(Panel33);  
    hbox2->Layout(); 
    Panel2->SetSizer(hbox2);
}

void SimFluUIFrame::OnButton7Click(wxCommandEvent& event)
{
   hbox2->Show(Button6); 
   hbox2->Hide(Button7);
   hbox2->Hide(CheckBox3);
   hbox2->Hide(CheckBox4);
   hbox2->Hide(CheckBox5);
   hbox2->Hide(CheckBox1);
   hbox2->Hide(CheckBox7);
   hbox2->Hide(CheckBox6);
   hbox2->Hide(CheckBox8);
   hbox2->Hide(CheckBox11);
   hbox2->Show(Panel30); 
   hbox2->Show(Panel31); 
   hbox2->Show(Panel32); 
   hbox2->Show(Panel33); 
    hbox2->Layout(); 
    Panel2->SetSizer(hbox2);
}

void SimFluUIFrame::OnThreadCompletion(wxThreadEvent&)
{    
    wxMessageOutputDebug().Printf("MYFRAME: MyThread exited!\n");
    if (Thread1)
    {
    //    Thread1->Delete();
        wxCriticalSectionLocker enter(Thread1CS);
    //    delete Thread1;
        Thread1 = NULL;
    }
//    if (Thread1) Close();

}
void SimFluUIFrame::OnThreadUpdate(wxThreadEvent&)
{    
    wxMessageOutputDebug().Printf("MYFRAME: MyThread update...\n");
}
void SimFluUIFrame::DoPauseThread()
{    
// anytime we access the m_pThread pointer we must ensure that it won't    
// be modified in the meanwhile; since only a single thread may be    
// inside a given critical section at a given time, the following code    
// is safe:   
    wxCriticalSectionLocker enter(Thread1CS);    
    if (Thread1)         // does the thread still exist?   
    {        
    // without a critical section, once reached this point it may happen  
    // that the OS scheduler gives control to the MyThread::Entry() function,
    // which in turn may return (because it completes its work) making     
    // invalid the m_pThread pointer 
        if (Thread1->Pause() != wxTHREAD_NO_ERROR )            
            wxLogError("Can't pause the thread!");    
    }
}
