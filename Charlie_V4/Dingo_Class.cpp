#include <iostream>
#include "Animal_Class.hpp"
#include "Predator_Class.hpp"
#include "Dingo_Class.hpp"
#include <stdio.h>

using namespace std;

Dingo_Class::Dingo_Class() : Predator_Class() {
	
};

void Dingo_Class::eat() {

}

void Dingo_Class::set_dingo_population(int d){
	dingo_population = d;
}

int Dingo_Class::get_dingo_population(){
	return dingo_population;
}

Dingo_Class::~Dingo_Class() {

};