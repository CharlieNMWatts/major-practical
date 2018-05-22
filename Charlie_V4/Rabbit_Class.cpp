#include <iostream>
#include "Animal_Class.hpp"
#include "Prey_Class.hpp"
#include "Rabbit_Class.hpp"
#include <stdio.h>

using namespace std;


Rabbit_Class::Rabbit_Class() : Prey_Class() { //contructor

	

};
//eat could be removed
void Rabbit_Class::eat() { 
};
//increases the rabbit population
void Rabbit_Class::bread(){
	rabbit_population++;
}
void Rabbit_Class::die(){
	rabbit_population--;
}
//sets the rabbit population
void Rabbit_Class::set_rabbit_population(int r){
	rabbit_population = r;
};
//returns the rabbit population
int Rabbit_Class::get_rabbit_population(){
	return rabbit_population;
}

Rabbit_Class::~Rabbit_Class() {

};