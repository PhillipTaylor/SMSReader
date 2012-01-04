#include "gui_message_item.h"

GUIMessageItem::GUIMessageItem(wxWindow* parent, wxWindowID winid, const SMSMessage& smsMessage) :
	wxPanel(parent, winid),
	stSender(new wxStaticText(this, winid, smsMessage.GetSender())),
	stSentTime(new wxStaticText(this, winid, smsMessage.GetSentTime())),
	stMessageContents(new wxStaticText(this, winid, smsMessage.GetMessage()))
{
	wxColour blue(wxT("#2A2AF7"));
	wxColour green(wxT("#56DB4F"));
	wxFont originalFont = stSender->GetFont();
	wxFont boldFont(originalFont);
	boldFont.SetWeight( wxFONTWEIGHT_BOLD );
	wxSize stsMin(100, 60);
	wxSize bodyMin(300, 100);
	
	stSender->SetForegroundColour(blue);
	stSentTime->SetForegroundColour(green);
	stSender->SetFont(boldFont);
	stSentTime->SetFont(boldFont);
	stSender->SetMinSize(stsMin);
	stSentTime->SetMinSize(stsMin);
	
	stMessageContents->SetMinSize(bodyMin);
	stMessageContents->Wrap(200);

	wxBoxSizer* lines = new wxBoxSizer( wxVERTICAL );
	wxBoxSizer* topLine = new wxBoxSizer( wxHORIZONTAL );
	lines->AddSpacer(4);
	topLine->AddSpacer(5);
	this->SetSizer(lines);
	
	topLine->Add(stSender, wxALIGN_LEFT);
	topLine->Add(stSentTime, wxALIGN_RIGHT);
	lines->Add(topLine);
	lines->Add(stMessageContents, wxALIGN_CENTER_HORIZONTAL );
	
	lines->SetMinSize(wxSize(400,400));
	this->FitInside();
	this->Layout();
}

GUIMessageItem::~GUIMessageItem()
{
}

