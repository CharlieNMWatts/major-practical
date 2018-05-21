//
//  Animal_Class.cpp
//
//
//  Created by Charlie Watts on 2/5/18.
//
#include <iostream>
#include "Animal_Class.hpp"
#include <stdio.h>
#include "Prey_Class.hpp"

using namespace std;

// Animal_Class::Animal_Class(){


// }

void Animal_Class::eat() {
	//deliberatly empty
};


void Animal_Class::bread() {
	population++;
};
void Animal_Class::die() {
	population--;
};
void Animal_Class::set_population(int a) {
	population = a;
};
void Animal_Class::get_population() {

	//cout << "The animal population is: " << population << endl;
	//return 0;
};


