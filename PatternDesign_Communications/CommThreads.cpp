#include "CommThreads.h"
#include "boost\thread\thread.hpp"
#include "Logger.h"



//Constructor


CommThreads::CommThreads()
{

	//In this thread we manage received messages and its responses
	 boost::thread _rcvThread(&CommThreads::receiveData, this);
	// boost::thread _sndThread(&CommThreads::sendData, this);

	 
}

//Destructor
CommThreads::~CommThreads()
{
}


//Create Thread
void CommThreads::CreateThread()
{

}

void CommThreads::sendData()
{
	Logger::getInstance()->writeInLog(typeid(this).name(), "Creating send thread");
}
void CommThreads::receiveData()
{

	while (true)
	{
		Logger::getInstance()->writeInLog(typeid(this).name(), "Creating receive thread");

		//TODO: Wait for receiving message


		// If message is received, decode it and send response

		CommThreads::sendData();
	}

}
