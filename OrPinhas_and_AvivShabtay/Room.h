#ifndef __PERSON_H
#define __PERSON_H
#include <iostream>
using namespace std;

class Room
{
private:
	int maxNumberOfGuests;
	char* roomType;
	int costPerNight;
	
public:
	Room(int maxNumberOfGuests, char* strRoomType, int costPerNight)
	{
		this->roomType = new char[strlen(strRoomType) + 1];
		strcpy(this->roomType, strRoomType);
		this->maxNumberOfGuests = maxNumberOfGuests;
		this->costPerNight = costPerNight;
	};

	Room(Room& room)
	{
		this->roomType = new char[strlen(room.roomType) + 1];
		strcpy(this->roomType, room.roomType);
		this->maxNumberOfGuests = room.maxNumberOfGuests;
		this->costPerNight = room.costPerNight;
	};

	~Room()
	{
		try
		{
			delete[] = roomType;
		}
		catch()
		{
			 cout << "Exception\n";
		}
	};
};
#endif
