#ifndef __BOOKING_H
#define __BOOKING_H

#include "Guest.h"
#include <iostream>

using namespace std;

class Booking final
{
private:
	int orderLength;
	int roomNumber;
	int numberOfGuests;
	Guest** guests;

public:
	/*
	 * Not doing anything, just create empty prototype of booking.
	 */
	Booking() = default;

	/*
	 * Reserve room in the hotel.
	 * orderLength - amount of the days for the booking
	 * roomNumber - the room number
	 * guests - array of the guest for the room
	 * numberOfGuests - number of guest in stayingList
	 */
	explicit Booking(int orderLength, int roomNumber, Guest** guests, int numberOfGuests);

	/*
	 * Release all the allocated memory of the guests
	 */
	~Booking();

	/*
	 * Add new guest to the booking.
	 */
	void operator+=(Guest* guest);

	/*
	 * Print the booking information, guests information.
	 */
	friend ostream& operator<<(ostream& os, const Booking& booking);
};
#endif
