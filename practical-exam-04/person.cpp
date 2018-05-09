#include "person.h"
#include <iostream>
#include <string>
using namespace std;

Person::Person(){
	string n = "?";
	string o = "?";
	int serviceLength = 0;
	int sl;
	name = n;
	occupation = o;
	serviceLength = sl;
	personID = 0;
}

Person::Person(string n, string o, int sl){
	name = n;
	occupation = o;
	serviceLength = sl;
	personID = 0;
}

void Person::set_salary(int s){
	salary = s;
}

void Person::set_serviceLength(int sl){
	serviceLength = sl;
}

Person::get_name(string n){
	string name;
}

Person::get_occupation(string o){
	string occupation;
}

Person::get_salary(){
	return salary;
}

Person::get_personID(){
	return personID;
}

Person::get_serviceLength(){
	return serviceLength; 
}

Person::~Person(){}