#ifndef __POOL_H
#define __POOL_H
#include <iostream>
using namespace std;

class Pool
{
private:
	int isHavingEntertainment;
	char* openingHours;

public:
	Pool(int isHavingEntertainment, char* strHours) 
	{
	openingHours = new char[strlen(strHours) + 1];
	strcpy(openingHours, strHours);
	this->isHavingEntertainment = isHavingEntertainment;
	};

	Pool( Pool& pool)
	{
		openingHours = new char[strlen(pool.openingHours) + 1];
		strcpy(openingHours, pool.openingHours);
		isHavingEntertainment = pool.isHavingEntertainment;
	};

	~Pool() 
	{
		delete[] openingHours;
	};



};
#endif


