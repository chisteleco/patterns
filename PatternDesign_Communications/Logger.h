#pragma once
#include <iostream>
class Logger
{

public:
	static Logger* getInstance();
	static Logger* _instance;

	void writeInLog(std::string str);
	void writeInLog(std::string sender, std::string s);
private:
	Logger();
};

