#ifndef __SHIFTCREW_H
#define __SHIFTCREW_H
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

	~ShiftCrew();

	friend void operator+=(int size, ShiftCrew& shiftCrew, Employee& employee)
	{
		shiftcrew[size] = employee;

	};


	friend void operator-=(int size, ShiftCrew& shiftCrew, Employee& employee)
	{
		for (int i = 0; i < size; i++) {
			if (shiftCrew[i] == employee)
			{
				for (int j = i; j < size; j++) {
					shiftCrew[j] = shiftCrew[j + 1];
				}
				shiftCrew[size - 1] = null
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
