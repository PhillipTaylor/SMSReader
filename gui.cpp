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

	//main sizer for whole interface
	wxBoxSizer* mainSizer = new wxBoxSizer( wxVERTICAL );

	this->SetSizer( mainSizer );
	
	// Filter box section
	wxStaticText* filterLabel = new wxStaticText(this, wxID_ANY, wxT("Filter by Sender:"));
	
	m_filter = new wxComboBox(
		this,
		wxID_ANY,
		wxT(""),
		wxDefaultPosition,
		wxDefaultSize,
		0,
		NULL,
		wxCB_DROPDOWN|wxCB_READONLY
	);
	
	wxBoxSizer* filterSizer = new wxBoxSizer( wxHORIZONTAL );
	filterSizer->Add(filterLabel);
	filterSizer->Add(m_filter);
	mainSizer->Add(filterSizer);
	
	// List of Messages section
	m_scrWin = new wxScrolledWindow(
		this,
		wxID_ANY
	);
			
	m_listSizer = new wxBoxSizer(wxVERTICAL);
	m_scrWin->SetSizer(m_listSizer);
	mainSizer->Add(m_scrWin, wxEXPAND);
	
	//example msg
	SMSMessage* exampleMessage = new SMSMessage(
		wxT("+44 07950 322 789"),
		wxT("2011-13-07 13:22"),
		wxT("Yo mate, what's up?")
	);

	for (int i = 0; i < 6; i++) {
		AddSMSMessagePanel(*exampleMessage);
	}
	
	//wxSize minimum(300,500);
	
	m_scrWin->FitInside();
	//m_scrWin->SetMinSize(minimum);
	//m_listSizer->SetMinSize(minimum);
	//m_scrWin->EnableScrolling(true, true);
	//m_scrWin->SetScrollRate(1,1);
	m_scrWin->SetScrollRate(5, 5);

	this->Layout();
	m_statusBar = this->CreateStatusBar( 1, wxST_SIZEGRIP, wxID_ANY );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainFrameBase::OnCloseFrame ) );
	this->Connect( menuFileOpen->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnFileOpen ) );
	this->Connect( menuFileExit->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnExitClick ) );
}

MainFrameBase::~MainFrameBase()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainFrameBase::OnCloseFrame ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnExitClick ) );
}

void MainFrameBase::ClearAll() {
	m_listSizer->Clear(true);
}

void MainFrameBase::AddSMSMessagePanel(const SMSMessage& message) {
	GUIMessageItem* gmi = new GUIMessageItem(m_scrWin, wxID_ANY, message); //object inherits from wxPanel
	m_listSizer->Add(gmi);
}
