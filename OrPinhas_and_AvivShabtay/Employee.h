#ifndef __EMPLOYEE_H
#define __EMPLOYEE_H

#include "Person.h"
#include <iostream>

using namespace std;

class Employee : virtual public Person
{
protected:
	int jobScope;
	bool isWorkingSaturday;

public:
	/*
	 * Not doing anything, just create empty prototype of Employee.
	 */
	Employee() = default;

	/*
	 * Create new employee.
	 * jobScope - how much hours the employee can work
	 * isWorkingSaturday - is willing to work on Saturday
	 */
	explicit Employee(int age, const char* name, int jobScope, bool isWorkingSaturday);

	/*
	 * Not doing anything, just note virtual in case needed to be implemented.
	 */
	virtual ~Employee() = default;

	/*
	 * Return the job scope of this employee.
	 */
	int getJobScope() const;

	/*
	 * Return if this employee works on Saturday.
	 */
	bool isWorkingOnSaturday() const;

	/*
	 * Verify if other employee equal in his attributes to this employee.
	 */
	bool operator==(const Employee& other) const;
};
#endif
