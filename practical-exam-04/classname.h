#ifndef CLASSNAME_H
#define CLASSNAME_H
#include <string>
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

	void set_salary(int s);
	void set_serviceLength(int sl);

	~Person();
private: 
	int salary;
	int personID;
	int serviceLength;
	string name;
	string occupation;
};

#endif CLASS_H
