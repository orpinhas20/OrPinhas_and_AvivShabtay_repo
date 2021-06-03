#ifndef __EMPLOYEE_H
#define __EMPLOYEE_H

#include "Person.h"
#include <iostream>

using namespace std;

class Employee : public Person
{
protected:
	int jobScope;
	bool isWorkimgSaterday;

public:
	Employee(int jobScope, bool isWorkimgSaterday)
	{
		this->jobScope = jobScope;
		this->isWorkimgSaterday = isWorkimgSaterday;
	};

	~Employee()=default;



	friend bool operator==(const Employee& employee1, const Employee& employee2) const
	{
	};

};
#endif
