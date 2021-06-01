#ifndef __EMPLOYEE_H
#define __EMPLOYEE_H
#include <iostream>
using namespace std;

class Employee : public Person
{
protected:
	int jobScope;
	int isWorkimgSaterday;

public:
	Employee(int jobScope, int isWorkimgSaterday)
	{
		this->jobScope = jobScope;
		this->isWorkimgSaterday = isWorkimgSaterday;
	};

	~Employee();



	friend bool operator==(const Employee& employee1, const Employee& employee2) const
	{
		return (employee1.jobScope == employee2.jobScope) && (employee1.isWorkimgSaterday == employee2.isWorkimgSaterday) && (employee1.age == employee2.age) && (employee1.name == employee2.name);
	};

};
#endif
