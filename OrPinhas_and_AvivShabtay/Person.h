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
	Person(int age, char* name)
	{
		this->age = age;
		this.name = new char[strlen(name) + 1];
		strcpy(this.name, name);
	};

	Person(Person& person)
	{
		this.age = person.age;
		this.name = new char[strlen(person.name) + 1];
		strcpy(this.name, person.name);
	};

	~Person()
	{
		try
		{
			delete[] name;
		}
		catch()
		{	
			 cout << "Exception\n";
		}
	};

	char* getName()
	{
	};

};
#endif



