#include "MessageType2.h"


MessageType2::MessageType2()
{
	data.Header = 2;
	setData();
}
void MessageType2::setData()
{
	data.Payload = new char[4];
	data.Payload[0] = 5;
	data.Payload[1] = 6;
	data.Payload[2] = 7;
	data.Payload[3] = 8;

}