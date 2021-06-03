#ifndef __GUEST_H
#define __GUEST_H

#include "Person.h"
#include <iostream>

using namespace std;

class Guest : public Person
{
protected:
	int roomNumber;

public:
	Guest(int roomNumber)
	{
		this->roomNumber = roomNumber;
	};
	
	~Guest()=default;

};
#endif
