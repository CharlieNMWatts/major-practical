#include <iostream>
#include "Animal_Class.hpp"
#include "Predator_Class.hpp"
#include <stdio.h>

using namespace std;

Predator_Class::Predator_Class() : Animal_Class() {

};

void Predator_Class::eat() {

};
void Predator_Class::die(){
	Predator_Population--;
}

Predator_Class::~Predator_Class() {

};
