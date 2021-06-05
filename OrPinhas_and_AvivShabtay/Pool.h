#ifndef __POOL_H
#define __POOL_H

#include <iostream>

using namespace std;

class Pool final
{
private:
	bool isHavingEntertainment;
	const char* openingHours;

public:
	/*
	 * Not doing anything, just create empty prototype of pool.
	 */
	Pool() = default;
	/*
	 * Define new Pool in the hotel.
	 */
	explicit Pool(bool isHavingEntertainment, const char* hours);
	/*
	 * Release all the allocated memory of the pool
	 */
	~Pool();
};
#endif


