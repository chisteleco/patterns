#pragma once
class Message
{
protected:
#pragma pack()
	struct dataType {
		int Header;
		char* Payload;
		int CRC;
	};

	dataType data;
	virtual void setData();
};

