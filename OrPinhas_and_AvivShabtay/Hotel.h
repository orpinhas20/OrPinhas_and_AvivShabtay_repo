#ifndef __HOTEL_H
#define __HOTEL_H

#include "Guest.h"
#include "Employee.h"
#include "Booking.h"
#include "ShiftCrew.h"
#include "Pool.h"

#include <iostream>

using namespace std;

class Hotel
{
private:
	Booking** bookings;
	ShiftCrew* shifts[7]; // Seven days in week => seven shifts
	int roomAmount;
	const char* hotelName;
	Pool pool;

public:
	Hotel(int roomAmount, const char* name, Pool pool);

	/*
	 * Display the hotel details: booking, guests, employees, etc.
	 */
	void printHotelDetails();

	/*
	 * Create new booking, associate the guests to available room.
	 */
	void createBooking(Guest** guests, int numberOfGuests);

	/*
	 * Add new employee to an existing shift.
	 */
	void addEmployeeToShift(Employee* employee);

	/*
	 * Search the guest booking by it's details.
	 * If given invalid room number (-1), ignore the room-number and return the first booking that was found.
	 */
	const Booking& findBooking(Guest& guest);

	/*
	 * Add guest to an existing booking.
	 */
	void addGuestToBooking(const Booking& booking, Guest& guest);

	/*
	 * Close an existing booking, release all related resources.
	 */
	void closeBooking(const Booking& bookingToClose);

	/*
	 * Return the amount of available rooms in the hotel.
	 */
	int getAvailableRooms() const;

	/*
	 * Return the hotel name.
	 */
	const char* getName() const;

	/*
	 * Set the hotel name.
	 */
	void setName(const char* name);

	/*
	 * Return the amount of rooms in the hotel.
	 */
	int getRoomAmount() const;

	/*
	 * Sets the amount of rooms in the hotel.
	 */
	void setRoomAmount(int roomAmount);

	/*
	 * Print the hotel details.
	 */
	friend ostream& operator<<(ostream& os, const Hotel& hotel);
};
#endif
