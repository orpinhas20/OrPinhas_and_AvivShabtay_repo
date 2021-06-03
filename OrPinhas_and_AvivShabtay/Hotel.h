#ifndef __HOTEL_H
#define __HOTEL_H

#include <iostream>
#include <string.h>
#include "Pool.h"

using namespace std;

class Hotel
{
private:
	int roomAmount;
	char* hotelName;
	Pool pool;
	Hotel(Hotel& hotle);

public:
	Hotel(int roomAmount, char* name, Pool pool)
	{
		this->hotelName = new char[strlen(name) + 1];
		strcpy(this->hotelName, name);
		this->roomAmount = roomAmount;
		this->pool = pool;
	};

	Hotel(Hotel& hotel)
	{
		this.hotelName = new char[strlen(hotel.votelName) + 1];
		strcpy(this->hotelName, hotel.hotelName);
		this.roomAmount = hotel.roomAmount;
		this.pool = hotel.pool;
	};

	~Hotel()
	{
		try
		{
			delete[] hotelName;
		}
		catch()
		{
			cout << "Exception\n";
		};
	};


};
#endif
