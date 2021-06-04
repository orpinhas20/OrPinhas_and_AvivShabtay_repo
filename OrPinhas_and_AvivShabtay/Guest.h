#ifndef __GUEST_H
#define __GUEST_H

#include "Person.h"
#include <iostream>

using namespace std;

class Guest : virtual public Person
{
protected:
	int roomNumber;

public:
	/*
	 * Not doing anything, just create empty prototype of guest.
	 */
	Guest() = default;

	/*
	 * Create new guest.
	 * age - the age of the guest
	 * name - the name of the guest
	 * roomNumber - the related room number of the guest
	 */
	explicit Guest(int age, const char* name, int roomNumber);

	/*
	 * Return the related room number of the guest.
	 */
	int getRoomNumber() const;

	/*
	 * Print the guest details.
	 */
	friend ostream& operator<<(ostream& os, const Guest& guest);
};
#endif

