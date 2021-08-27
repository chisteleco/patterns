#include "Logger.h"
#include <ctime>
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
Logger* Logger::_instance;
Logger* Logger::getInstance()
{
	if (_instance == NULL)
	{
		_instance = new Logger();
	}
	return _instance;
}

Logger::Logger()
{

}

void Logger::writeInLog(std::string s)
{
	time_t now = time(0);
	char* dt = ctime(&now);
	tm *gmtm = gmtime(&now);
	dt = asctime(gmtm);
	dt[strlen(dt) - 1] = 0;
	std::cout << "<" << dt << "> :" << s.c_str() <<std::endl;
}

void Logger::writeInLog(std::string sender, std::string s)
{

	//TODO: some blocking mechanism to avoid race conditions
	time_t now = time(0);
	char* dt = ctime(&now);
	tm *gmtm = gmtime(&now);
	dt = asctime(gmtm);
	dt[strlen(dt) - 1] = 0;
	std::cout << "<" << dt << "> :"<<" Send from "<< sender.c_str() <<" . " << s.c_str() << std::endl;
}