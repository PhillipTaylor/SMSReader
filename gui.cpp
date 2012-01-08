///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Feb  8 2009)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui.h"

///////////////////////////////////////////////////////////////////////////

MainFrameBase::MainFrameBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetTitle(wxT("Phills SMS Reader"));
	
	//Menu Bar stuff.
	m_menuBar = new wxMenuBar( 0 );
	m_menuFile = new wxMenu();
	wxMenuItem* menuFileExit;
	menuFileExit = new wxMenuItem( m_menuFile, wxID_EXIT, wxString( _("E&xit") ) + wxT('\t') + wxT("Alt+X"), wxEmptyString, wxITEM_NORMAL );
	
	wxMenuItem* menuFileOpen;
	menuFileOpen = new wxMenuItem( m_menuFile, wxID_OPEN, wxString( _("&Open") ) + wxT('\t') + wxT("Alt+O"), wxEmptyString, wxITEM_NORMAL );

	m_menuFile->Append( menuFileOpen );
	m_menuFile->Append( menuFileExit );
	m_menuBar->Append( m_menuFile, _("&File") );
	
	this->SetMenuBar( m_menuBar );
	
	wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(mainSizer);

	wxBoxSizer* filterSizer = new wxBoxSizer(wxHORIZONTAL);
	mainSizer->Add(filterSizer, 0, wxALIGN_LEFT|wxLEFT|wxRIGHT|wxTOP, 5);

	wxStaticText* lblFilter = new wxStaticText( this, wxID_STATIC, _("Filter Sender: "), wxDefaultPosition, wxDefaultSize, 0 );
	filterSizer->Add(lblFilter, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

	wxArrayString filterList;
	cboFilter = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, filterList, 0 );
	filterSizer->Add(cboFilter, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

	wxArrayString messageList;
	lstMessages = new wxSimpleHtmlListBox( this, wxID_ANY, wxDefaultPosition, wxSize(400, 300), messageList, wxHLB_DEFAULT_STYLE );
	mainSizer->Add(lstMessages, 1, wxGROW|wxLEFT|wxRIGHT|wxBOTTOM, 5);
	
	lstMessages->SetBackgroundColour(this->GetBackgroundColour());
	AddSMSMessage(SMSMessage(wxT(""),wxT(""),wxT("")));

	this->Layout();
	m_statusBar = this->CreateStatusBar( 1, wxST_SIZEGRIP, wxID_ANY );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainFrameBase::OnCloseFrame ) );
	this->Connect( menuFileOpen->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnFileOpen ) );
	this->Connect( menuFileExit->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnExitClick ) );
	this->Connect( cboFilter->GetId(), wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( MainFrameBase::OnChangeFilter ) );
}

MainFrameBase::~MainFrameBase()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainFrameBase::OnCloseFrame ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnExitClick ) );
}

void MainFrameBase::ClearAll() {
	lstMessages->Clear();
}

void MainFrameBase::AddSMSMessage(const SMSMessage& message) {
		
	wxString t;
	wxString open1 = wxString(wxT("<div align=\"left\" color=\"#ff00aa\">"));
	wxString open2 = wxString(wxT("</div><div align=\"right\" color=\"#ffbbcc\""));
	wxString open3 = wxString(wxT("</div><br><div>"));
	wxString open4 = wxString(wxT("</div>"));
	
	t = open1;
	t += message.GetSender();
	t += open2;
	t += message.GetSentTime();
	t += open3;
	t += message.GetMessage();
	t += open4;
	
	lstMessages->Insert(t, lstMessages->GetCount());
}
