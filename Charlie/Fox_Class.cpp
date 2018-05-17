#include <iostream>
#include "Animal_Class.hpp"
#include "Predator_Class.hpp"
#include "Fox_Class.hpp"
#include <stdio.h>

using namespace std;

Fox_Class::Fox_Class() :Predator_Class(){

	cout << "Fox_Class contructor" << endl;

};
	void Animal_Class::eat(){
		cout << "the fox ate" << endl;
	}

Fox_Class::~Fox_Class(){
	cout << "Fox_Class destructor" << endl;
};
