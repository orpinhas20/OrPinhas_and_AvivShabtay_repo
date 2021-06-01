#ifndef __HOTEL_H
#define __HOTEL_H
#include <iostream>
#include <string.h>
using namespace std;

class Hotel
{
private:
	int roomAmount;
	char* hotelName;
	Pool pool;
	//we d'ont want to creat hotle copies, only one hotel
	Hotel(Hotel& hotle);

public:
	Hotel(int roomAmount, char* strName, Pool pool)
	{
		hotelName = new char[strlen(strName) + 1];
		strcpy(hotelName, strName);
		this->roomAmount = roomAmount;
		this->pool = pool;
	};

	Hotel(Hotel& hotel)
	{
		hotelName = new char[strlen(hotel.votelName) + 1];
		strcpy(hotelName, hotel.hotelName);
		roomAmount = hotel.roomAmount;
		pool = hotel.pool;
	};

	~Hotel()
	{
		delete[] hotelName;
	};

	//	friend ostream& operator<<(ostream& os, Hotel& hotel) const
	//	{
	//		os << 'List Of Crew For Current Shift:' << employee.crewList;
	//		return os;
	//	};


};
#endif
