#ifndef __PERSON_H
#define __PERSON_H
#include <iostream>
using namespace std;

class Person
{
protected:
	int age;
	char* name;

public:
	Person(int age, char* strName)
	{
		this->age = age
			name = new char[strlen(strName) + 1];
		strcpy(name, strName);
	};

	Person(Person& person)
	{
		age = person.age
			name = new char[strlen(person.name) + 1];
		strcpy(name, person.name);
	};

	~Person()
	{
		delete[] name;
	};

	char* getName()
	{
		return name;
	};

};
#endif



