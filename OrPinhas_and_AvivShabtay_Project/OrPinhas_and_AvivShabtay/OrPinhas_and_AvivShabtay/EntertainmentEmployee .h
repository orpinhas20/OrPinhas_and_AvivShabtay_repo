#ifndef __ENTERTAINMENTEMPLOYEE_H
#define __ENTERTAINMENTEMPLOYEE_H
#include <string.h>
using namespace std;

class EntertainmentEmployee : public Employee, Guest
{
private:
	char* speciality;

public:
	EntertainmentEmployee(char* strName)
	{
		speciality = new char[strlen(strName) + 1];
		strcpy(speciality, strName);
	};

	EntertainmentEmployee(EntertainmentEmployee& entertainmentEmployee)
	{
		speciality = new char[strlen(entertainmentEmployee.speciality) + 1];
		strcpy(speciality, entertainmentEmployee.speciality);
	};

	~EntertainmentEmployee() 
	{
		delete[] speciality;
	};

};
#endif
