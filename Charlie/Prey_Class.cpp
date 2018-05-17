#include <iostream>
#include "Animal_Class.hpp"
#include "Prey_Class.hpp"
#include <stdio.h>

using namespace std;

Prey_Class::Prey_Class() :Animal_Class() {
	cout <<"prey class constructor" << endl;
};

void Animal_Class::eat(){
	cout <<"the animal ate" << endl;
};

Prey_Class::~Prey_Class(){
	cout << "prey class destructor" << endl;
};
