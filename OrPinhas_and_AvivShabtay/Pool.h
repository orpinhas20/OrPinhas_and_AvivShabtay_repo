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
	Pool(bool isHavingEntertainment, char* hours);

	Pool(Pool& pool);

	~Pool();
};
#endif


