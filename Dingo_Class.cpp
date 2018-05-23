#include <iostream>
#include "Animal_Class.hpp"
#include "Predator_Class.hpp"
#include "Dingo_Class.hpp"
#include "Kangaroo_Class.hpp"
#include <stdio.h>

using namespace std;

Dingo_Class::Dingo_Class() : Predator_Class() {

};
//plan: this wil randomly call either the die function of kangroo or rabbit class.
void Dingo_Class::eat(Kangaroo_Class k) {

	k.die();

}
//adds one to the dingo population
void Dingo_Class::bread() {
	dingo_population++;
}
//sets the dingo population
void Dingo_Class::set_dingo_population(int d) {
	dingo_population = d;
}
//returns the dingo population
int Dingo_Class::get_dingo_population() {
	return dingo_population;
}

Dingo_Class::~Dingo_Class() {

};