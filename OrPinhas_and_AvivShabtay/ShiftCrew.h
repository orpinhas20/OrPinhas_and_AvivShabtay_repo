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
	ShiftCrew() = defualt;
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
	void operator+=(int size, ShiftCrew& shiftCrew, Employee& employee);

	/*
	 * Remove one employee from the shift.
	 */
	void operator-=(int size, ShiftCrew& shiftCrew, Employee& employee);

	/*
	 * Print the shift crew details.
	 */
	friend ostream& operator<<(ostream& os, const ShiftCrew& shiftCrew) const;
	/*
	 * Return the Employees for current shift.
	 */
	Employee** getCrewList();
	/*
	 * Return the amount of needed employees for current shift.
	 */
	int getCrewAmount();

};
#endif
