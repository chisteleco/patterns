#pragma once
#include "Message.h"
class MessageFactory
{

public:
	MessageFactory();
	~MessageFactory();
	Message* createMessage(int);
};

