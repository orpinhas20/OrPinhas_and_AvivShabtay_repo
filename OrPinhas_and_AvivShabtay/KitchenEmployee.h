#ifndef __KITCHENEMPLOYEE_H
#define __KITCHENEMPLOYEE_H

#include "Employee.h"

#include <iostream>

using namespace std;

class KitchenEmployee final : public Employee
{
private:
	const char* specialty;

public:
	/*
	 * Not doing anything, just create empty prototype of KitchenEmployee.
	 */
	KitchenEmployee() = default;

	/*
	 * Create new kitchen employee with specialty.
	 * specialty - the kitchen employee specialty description.
	 */
	explicit KitchenEmployee(int age, const char* name, int jobScope, bool isWorkingSaturday, const char* specialty);

	/*
	 * copy the fields to a new addres
	 */
	KitchenEmployee(const KitchenEmployee& other);

	/*
	 * Return the kitchen specialty of this employee.
	 */
	const char* getSpecialty() const;

	/*
	 * Set the kitchen specialty of this employee.
	 */
	void setSpecialty(const char* specialty);
};
#endif

