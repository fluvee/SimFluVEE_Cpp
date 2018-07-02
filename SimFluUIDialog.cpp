#include <wx/progdlg.h>

class SimFluUIProgressDialog : public wxDialog 
{
   private:
   
   protected:
      wxStaticText* MyTitleStaticText;
      wxGauge* MyGauge;
      wxButton* m_button1;
   //   wxButton* m_button2;
   //   wxButton* m_button3;
   
   public:
      SimFluUIProgressDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("My Label"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 494,140 ), long style = wxDEFAULT_DIALOG_STYLE );
      ~SimFluUIProgressDialog();
   
};

SimFluUIProgressDialog::SimFluUIProgressDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
   this->SetSizeHints( wxDefaultSize, wxDefaultSize );
   
   wxBoxSizer* BoxSizer1;
   BoxSizer1 = new wxBoxSizer( wxVERTICAL );
   
   MyTitleStaticText = new wxStaticText( this, wxID_ANY, wxT("Progress"), wxDefaultPosition, wxDefaultSize, 0 );
   MyTitleStaticText->Wrap( -1 );
   BoxSizer1->Add( MyTitleStaticText, 1, wxALIGN_CENTER|wxALL, 10 );
   
   MyGauge = new wxGauge( this, wxID_ANY, 100, wxDefaultPosition, wxSize( -1,-1 ), wxGA_HORIZONTAL );
   BoxSizer1->Add( MyGauge, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 10 );
   
   wxBoxSizer* BoxSiezer2;
   BoxSiezer2 = new wxBoxSizer( wxHORIZONTAL );
   
   m_button1 = new wxButton( this, wxID_ANY, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
   BoxSiezer2->Add( m_button1, 0, wxALL, 5 );
   
//   m_button2 = new wxButton( this, wxID_ANY, wxT("Button2"), wxDefaultPosition, wxDefaultSize, 0 );
//   BoxSiezer2->Add( m_button2, 0, wxALL, 5 );
   
//   m_button3 = new wxButton( this, wxID_ANY, wxT("Button3"), wxDefaultPosition, wxDefaultSize, 0 );
//   BoxSiezer2->Add( m_button3, 0, wxALL, 5 );
   
   BoxSizer1->Add( BoxSiezer2, 1, wxALIGN_RIGHT, 5 );
   
   this->SetSizer( BoxSizer1 );
   this->Layout();
}

SimFluUIProgressDialog::~SimFluUIProgressDialog()
{
}