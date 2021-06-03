#ifndef __SHIFTCREW_H
#define __SHIFTCREW_H

#include "Employee.h"
#include <iostream>

using namespace std;

class ShiftCrew
{
private:
	Employee crewList[];
	int crewAmount;

public:
	ShiftCrew(Employee crewList[], int crewAmount)
	{
		this->crewList = crewList;
		this->crewAmount = crewAmount;
	};

	~ShiftCrew() = default;

	friend void operator+=(int size, ShiftCrew& shiftCrew, Employee& employee)
	{
		
	};

	friend void operator-=(int size, ShiftCrew& shiftCrew, Employee& employee)
	{

	};

	friend ostream& operator<<(ostream& os, ShiftCrew& shiftCrew) const
	{

	};

};
#endif
