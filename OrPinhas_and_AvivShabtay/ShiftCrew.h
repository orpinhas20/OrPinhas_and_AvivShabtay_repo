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
		this->shiftcrew[size] = employee;
	};

	friend void operator-=(int size, ShiftCrew& shiftCrew, Employee& employee)
	{
		for (int i = 0; i < size; i++) {
			if (this->shiftCrew[i] == employee)
			{
				for (int j = i; j < size; j++) {
					this->shiftCrew[j] = this->shiftCrew[j + 1];
				}
				this->shiftCrew[size - 1] = null;
					return;
			}
		}
	};

	friend ostream& operator<<(ostream& os, ShiftCrew& shiftCrew) const
	{
		os << 'List Of Crew For Current Shift:' << employee.crewList;
		return os;
	};

};
#endif
