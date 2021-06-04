#ifndef __ENTERTAINMENTEMPLOYEE_H
#define __ENTERTAINMENTEMPLOYEE_H

#include "Employee.h"
#include "Guest.h"

using namespace std;

class EntertainmentEmployee final : public Employee, public Guest
{
private:
	const char* capability;

public:
	/*
	 * Not doing anything, just create empty prototype of EntertainmentEmployee.
	 */
	EntertainmentEmployee() = default;

	/*
	 * Create new entertainment employee with specific capability.
	 */
	explicit EntertainmentEmployee(int age, const char* name, int jobScope, bool isWorkingSaturday, int roomNumber,
		const char* capability);

	/*
	 * Return the entertainment capability of this employee.
	 */
	const char* getCapability() const;

	/*
	 * Set the entertainment capability for this employee.
	 */
	void setCapability(const char* capability);
};
#endif
