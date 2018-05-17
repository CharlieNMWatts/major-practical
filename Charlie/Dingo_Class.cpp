#include <iostream>
#include "Animal_Class.hpp"
#include "Predator_Class.hpp"
#include "Dingo_Class.hpp"
#include <stdio.h>

using namespace std;

Dingo_Class::Dingo_Class() :Predator_Class(){
	cout << "Dingo_Class constructor" << endl;
};

void Animal_Class::eat(){
	cout << "the dingo ate" << endl;
}

Dingo_Class::~Dingo_Class(){
	cout << "Dingo_Class destructor" << endl;
};