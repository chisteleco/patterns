#pragma once
#include "MessageFactory.h"
#include "Message.h"
#include <vector>
#include "CommThreads.h"

class CommManager
{

public:
	CommManager();
	~CommManager();
	Message* CreateMessage(int itype);
	std::vector<Message*>* getAllMessages();
	std::vector<Message*>* msgs;

private:
	MessageFactory* _factory;
	//CommThreads* _Threads;
	CommThreads* _Threads;
};

