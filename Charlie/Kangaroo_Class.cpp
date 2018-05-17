#include <iostream>
#include "Animal_Class.hpp"
#include "Prey_Class.hpp"
#include "Kangaroo_Class.hpp"
#include <stdio.h>

using namespace std;

Kangaroo_Class::Kangaroo_Class() : Prey_Class() {
	cout << "Kangaroo_Class constructor" << endl;

};
void Animal_Class::eat() {
	cout << "the kangaroo ate" << endl;
};

Kangaroo_Class::~Kangaroo_Class() {
	cout << "Kangaroo_Class destructor" << endl;
};




