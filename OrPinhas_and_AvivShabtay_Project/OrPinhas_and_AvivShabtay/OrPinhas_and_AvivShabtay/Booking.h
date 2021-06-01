#ifndef __BOOKING_H
#define __BOOKING_H
#include <iostream>
using namespace std;

class Booking
{
private:
	int orderLength;
	int roomNumber;
	int numberOfGuests;
	Guest stayingList[];

public:
	Booking(int orderLength, int roomNumber, Guest stayingList[], int numberOfGuests)
	{
		this->orderLength = orderLength;
		this->roomNumber = roomNumber;
		this->stayingList = stayingList;
		this->numberOfGuests = numberOfGuests;
	};

	~Booking();


	friend void operator+=(Booking& booking, Guest& guest)
	{
		booking.stayingList[numberOfGuests] = guest;
		numberOfGuests++;

	};

	friend ostream& operator<<(ostream& os, Booking& booking) const
	{
		os << 'Order: number of guests - ' << booking.numberOfGuests << 'Name Of Guests - ' << booking.stayingList << 'Order Length - ' << booking.orderLength << 'Room Number For Current Order - ' << booking.roomNumber;
		return os;
	};


};
#endif
