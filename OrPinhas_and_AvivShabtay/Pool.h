#ifndef __POOL_H
#define __POOL_H

#include <iostream>

using namespace std;

class Pool
{
private:
	bool isHavingEntertainment;
	char* openingHours;

public:
	Pool(bool isHavingEntertainment, char* hours)
	{
		this->openingHours = new char[strlen(strHours) + 1];
		strcpy(this.openingHours, hours);
		this->isHavingEntertainment = isHavingEntertainment;
	};

	Pool(Pool& pool)
	{
		this->openingHours = new char[strlen(pool.openingHours) + 1];
		strcpy(this->openingHours, pool.openingHours);
		this->isHavingEntertainment = pool.isHavingEntertainment;
	};

	~Pool()
	{
		try
		{
			delete[] openingHours;
		}
		catch()
		{
			 cout << "Exception\n";
		}
		
	};



};
#endif


