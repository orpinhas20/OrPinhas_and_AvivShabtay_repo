
#ifndef __ENTERTAINMENTEMPLOYEE_H
#define __ENTERTAINMENTEMPLOYEE_H
#include <string.h>
using namespace std;

class EntertainmentEmployee : public Employee, Guest
{
private:
	char* speciality;

public:
	EntertainmentEmployee(char* name)
	{
		this->speciality = new char[strlen(name) + 1];
		strcpy(this->speciality, name);
	};

	EntertainmentEmployee(EntertainmentEmployee& entertainmentEmployee)
	{
		this->speciality = new char[strlen(entertainmentEmployee.speciality) + 1];
		strcpy(this->speciality, entertainmentEmployee.speciality);
	};

	~EntertainmentEmployee()
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
