
#ifndef __KITCHENEMPLOYEE_H
#define __KITCHENEMPLOYEE_H
#include <iostream>
#include <string.h>
#include "Employee.h"
using namespace std;

class KitchenEmployee : public Employee
{
protected:
	char* speciality;

public:
	KitchenEmployee(char* name)
	{
		speciality = new char[strlen(name) + 1];
		strcpy(speciality, name);
	};

	KitchenEmployee(KitchenEmployee& kitchenEmployee)
	{
		this.speciality = new char[strlen(kitchenEmployee.speciality) + 1];
		strcpy(speciality, kitchenEmployee.speciality);
	};

	~KitchenEmployee()
	{
		try
		{
			delete[] speciality;
		}
		catch()
		{
			 cout << "Exception\n";
		 }
	};

};
#endif

