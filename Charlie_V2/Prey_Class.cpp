#include <iostream>
#include "Animal_Class.hpp"
#include "Prey_Class.hpp"
#include <stdio.h>

using namespace std;

Prey_Class::Prey_Class() :Animal_Class() {

};

void Animal_Class::eat(){
	printf("Redefintion of eat in Prey_Class\n");


};

Prey_Class::~Prey_Class(){

};