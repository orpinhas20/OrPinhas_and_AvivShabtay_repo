#ifndef __KITCHENEMPLOYEE_H
#define __KITCHENEMPLOYEE_H
#include <iostream>
#include <string.h>
using namespace std;

class KitchenEmployee : public Employee
{
protected:
	char* speciality;

public:
	KitchenEmployee(char* strName)
	{
		speciality = new char[strlen(strName) + 1];
		strcpy(speciality, strName);
	};

	KitchenEmployee(KitchenEmployee& kitchenEmployee)
	{
		speciality = new char[strlen(kitchenEmployee.speciality) + 1];
		strcpy(speciality, kitchenEmployee.speciality);
	};

	~KitchenEmployee()
	{
		delete[] speciality;
	};

};
#endif

