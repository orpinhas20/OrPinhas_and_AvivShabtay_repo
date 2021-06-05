#ifndef __SHIFTCREW_H
#define __SHIFTCREW_H

#include "Employee.h"
#include <iostream>

using namespace std;

class ShiftCrew final
{
private:
	Employee** crewList;
	int crewAmount;

public:
	/*
	 * Not doing anything, just create empty prototype of ShiftCrew.
	 */
	ShiftCrew() = default;

	/*
	 * Create crew for current shift.
	 * crewAmount - amount of needed crew member for that shift
	 */
	explicit ShiftCrew(Employee** crewList, int crewAmount);

	/*
	 * Release all the allocated memory of the Shift Crew
	 */
	~ShiftCrew();

	/*
	 * Add new employee to the shift.
	 */
	void operator+=(Employee& employee);

	/*
	 * Remove one employee from the shift.
	 */
	void operator-=(Employee& employee);

	/*
	 * Return the Employees for current shift.
	 */
	Employee** getCrewList() const;

	/*
	 * Return the amount of needed employees for current shift.
	 */
	int getCrewAmount() const;

	/*
	 * Print the shift crew details.
	 */
	friend ostream& operator<<(ostream& os, const ShiftCrew& shiftCrew);
};
#endif
