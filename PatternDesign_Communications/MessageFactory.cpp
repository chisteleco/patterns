#include "MessageFactory.h"
#include "Message.h"
#include "MessageType1.h"
#include "MessageType2.h"





//Constructor
MessageFactory::MessageFactory()
{

}

MessageFactory::~MessageFactory()
{

}


//Destructor


Message* MessageFactory::createMessage(int type) {

	switch (type) {
	
	case 1:
		return new MessageType1();
		break;
	case 2:
		return new MessageType2();
		break;
	default:
		break;
	}

}