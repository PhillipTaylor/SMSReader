#include "sms_message.h"

SMSMessage::SMSMessage(const wxString& sender, const wxString& sentTime, const wxString& message) :
	sender(sender),
	sentTime(sentTime),
	message(message)
{}

SMSMessage::~SMSMessage()
{
}

