#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>
using namespace std;

class Person{
public:
	Person();
	Person(string n, string o, int sl);		// creates a person of name n, occupation o, and service length sl

	int get_name(string n);
	int get_occupation(string o);
	virtual int get_salary()= 0;
	int get_personID();
	int get_serviceLength();

	void set_salary(int s);					//Gets the person's current salary to update the person's data
	void set_serviceLength(int sl);			//Gets the person's current service length to update the person's data

	~Person();
private: 
	int salary;
	int personID;
	int serviceLength;
	string name;
	string occupation;
};

#endif PERSON_H
