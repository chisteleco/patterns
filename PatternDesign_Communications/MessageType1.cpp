#include "MessageType1.h"

MessageType1::MessageType1()
{
	data.Header = 1;
	setData();
}
void MessageType1::setData()
{
	data.Payload = new char[4];
	data.Payload[0] = 0;
	data.Payload[1] = 1;
	data.Payload[2] = 2;
	data.Payload[3] = 3;

}