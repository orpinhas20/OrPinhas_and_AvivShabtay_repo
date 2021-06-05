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
	 * Return is the pool have entertainment.
	 */
	bool doesHavingEntertainment() const;

	/*
	 * Set entertainment status for this pool.
	 */
	void setIsHavingEntertainment(bool isHavingEntertainment);

	/*
	 * Return string represent the opening hour fot this pool.
	 */
	const char* getOpeningHours() const;

	/*
	 * Set the opening hours for this pool.
	 */
	void setOpeningHours(const char* openingHours);

	/*
	 * Print the pool details.
	 */
	friend ostream& operator<<(ostream& os, const Pool& pool);
};
#endif


