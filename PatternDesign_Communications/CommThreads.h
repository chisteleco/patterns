#pragma once
#include "boost\thread\thread.hpp"
class CommThreads
{
public:
	CommThreads();
	~CommThreads();
	void CreateThread();

private:
	boost::thread* _rcvThread;
	boost::thread* _sndThread;

	void receiveData();
	void sendData();
};

