#ifndef __PERSON_H
#define __PERSON_H

#include <iostream>

using namespace std;

class Person
{
protected:
	int age;
	const char* name;

public:
	/*
	 * Not doing anything, just create empty prototype of person.
	 */
	Person() = default;

	/*
	 * Create new person.
	 * age - the age of the person.
	 * name - the name of the person.
	 */
	explicit Person(int age, const char* name);

	/*
	 * Create person from given person.
	 * Allow conversion.
	 */
	Person(Person& person);

	/*
	 * Not doing anything, just note virtual in case needed to be implemented.
	 */
	virtual ~Person() = default;

	/*
	 * Return the person age.
	 */
	int getAge() const;

	/*
	 * Return the person name.
	 */
	const char* getName() const;

	/*
	 * Verify if other person equal in his attributes to this person.
	 */
	bool operator==(const Person& other) const;

	/*
	 * Print the person details.
	 */
	friend ostream& operator<<(ostream& os, const Person& person);
};
#endif



