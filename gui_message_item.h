#ifndef GUIMESSAGEITEM_H
#define GUIMESSAGEITEM_H

#include "wx/panel.h" // Base class: wxPanel
#include "wx/stattext.h"
#include "sms_message.h"
#include "wx/window.h"
#include "wx/wx.h"

class GUIMessageItem : public wxPanel {

public:
	GUIMessageItem(wxWindow* parent, wxWindowID winid, const SMSMessage& smsMessage);
	~GUIMessageItem();

private:
	wxStaticText* stSender;
	wxStaticText* stSentTime;
	wxStaticText* stMessageContents;
};

#endif // GUIMESSAGEITEM_H
