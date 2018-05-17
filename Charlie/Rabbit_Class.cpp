#include <iostream>
#include "Animal_Class.hpp"
#include "Prey_Class.hpp"
#include "Rabbit_Class.hpp"
#include <stdio.h>

using namespace std;


Rabbit_Class::Rabbit_Class() :Prey_Class(){

	cout << "rabbit class constructor" << endl;

};
void Animal_Class::eat(){
	cout << "the rabbit ate" << endl;
};

Rabbit_Class::~Rabbit_Class(){
	cout << "rabbit class destructor" << endl;
};