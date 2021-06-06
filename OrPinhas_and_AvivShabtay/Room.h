#ifndef __ROOM_H
#define __ROOM_H

#include <iostream>

using namespace std;

class Room
{
private:
	int maxNumberOfGuests;
	const char* roomType;
	int costPerNight;

public:
	/*
	 * Define new room in the hotel.
	 */
	explicit Room(int maxNumberOfGuests, const char* roomType, int costPerNight);

	/*
	 * copy the fields to a new addres
	 */
	Room(const Room& other);


	/*
	 * Release all the allocated memory of the Room
	 */
	~Room();


	/*
	 * Return the maximum number of guests in the room.
	 */
	int getMaxGuestsInRoom() const;

	/*
	 * Set the maximum number of guests in the room.
	 */
	void setMaxGuestsInRoom(int maxGuests);

	/*
	 * Return the ype of the room.
	 */
	int getRoomType() const;

	/*
	 * Set the types of the room.
	 */
	void setRoomType(const char* roomType);

	/*
	 * Return the cost of the room for 1 night.
	 */
	int getCostPerNight() const;

	/*
	 * Set the cost of the room for 1 night.
	 */
	void setCostPerNight(int costPerNight);
};
#endif
