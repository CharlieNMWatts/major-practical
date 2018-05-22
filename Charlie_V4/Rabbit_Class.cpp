#include <iostream>
#include "Animal_Class.hpp"
#include "Prey_Class.hpp"
#include "Rabbit_Class.hpp"
#include <stdio.h>

using namespace std;


Rabbit_Class::Rabbit_Class() : Prey_Class() { //contructor

	

};
void Rabbit_Class::eat() { 
};

void Rabbit_Class::set_rabbit_population(int r){
	rabbit_population = r;
};

int Rabbit_Class::get_rabbit_population(){
	return rabbit_population;
}

Rabbit_Class::~Rabbit_Class() {

};