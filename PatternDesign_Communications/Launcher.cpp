#include <iostream>
#include "Logger.h"
#include "CommManager.h"
int main(int argc, char** argv)
{
	Logger::getInstance()->writeInLog("Init");
	//std::cout << "Init" << std::endl;
	CommManager* _comMgr = new CommManager();


	//Create messages. TODO: Messages created within the comm manager
	_comMgr->CreateMessage(1);
	_comMgr->CreateMessage(2);
	_comMgr->CreateMessage(1);
	
	
	getchar();
	
	   
	return 0;
}