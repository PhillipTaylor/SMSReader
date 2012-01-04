#ifndef SMSMESSAGE_H
#define SMSMESSAGE_H

#include "wx/string.h"

class SMSMessage {

public:
	SMSMessage(
		const wxString& sender,
		const wxString& sendTime,
		const wxString& message
	);

	~SMSMessage();

	const wxString& GetSender() const { return sender; }
	const wxString& GetSentTime() const { return sentTime; }
	const wxString& GetMessage() const { return message; }

private:
	const wxString sender;
	const wxString sentTime;
	const wxString message;

};

#endif // SMSMESSAGE_H
