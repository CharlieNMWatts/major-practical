#include <iostream>
#include "Animal_Class.hpp"
#include "Prey_Class.hpp"
#include <stdio.h>

using namespace std;

Prey_Class::Prey_Class() :Animal_Class() {

};

void Prey_Class::eat(){

};
void Prey_Class::die(){
	Prey_Population--;
};

void Prey_Class::set_prey_population(int q){
	Prey_Population = q;
};
int Prey_Class::get_prey_population(){
	return Prey_Population;
};

Prey_Class::~Prey_Class(){

};
