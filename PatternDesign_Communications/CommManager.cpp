#include "CommManager.h"
#include "Logger.h"
#include "CommThreads.h"
#include "boost\asio.hpp"
CommManager::CommManager()
{
	Logger::getInstance()->writeInLog(typeid(this).name(), "Creating object CommManager");
	_factory = new MessageFactory();
	msgs = new std::vector<Message*>();

	//create Threads  for init comms
	 _Threads= new CommThreads();
	_Threads->CreateThread();

	Logger::getInstance()->writeInLog(typeid(this).name(), "object CommManager created sucessfully");
}

CommManager::~CommManager()
{
	Logger::getInstance()->writeInLog(typeid(this).name(),"Destructing object CommManager");
	_Threads->~CommThreads();
	_factory->~MessageFactory();
	msgs->clear();
	Logger::getInstance()->writeInLog(typeid(this).name(),"CommManager destructed");
}

Message* CommManager::CreateMessage(int i)
{
	Message* m = _factory->createMessage(i);
	msgs->push_back(m);
	Logger::getInstance()->writeInLog(typeid(this).name(), "Created message");
	return m;
}

std::vector<Message*>* CommManager::getAllMessages()
{
	for (int i = 0; i < msgs->size(); i++)
		Logger::getInstance()->writeInLog(typeid(this).name(), "Message \n . Header=");

	return new std::vector<Message*>();
}