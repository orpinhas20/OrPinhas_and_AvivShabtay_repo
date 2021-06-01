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
		roomType = new char[strlen(strRoomType) + 1];
		strcpy(roomType, strRoomType);
		this->maxNumberOfGuests = maxNumberOfGuests;
		this->costPerNight = costPerNight;
	};

	Room(Room& room)
	{
		roomType = new char[strlen(room.roomType) + 1];
		strcpy(roomType, room.roomType);
		maxNumberOfGuests = room.maxNumberOfGuests;
		costPerNight = room.costPerNight;
	};

	~Room()
	{
		delete[] = roomType;
	};

};
#endif




