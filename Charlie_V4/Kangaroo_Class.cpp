#include <iostream>
#include "Animal_Class.hpp"
#include "Prey_Class.hpp"
#include "Kangaroo_Class.hpp"
#include <stdio.h>

using namespace std;

Kangaroo_Class::Kangaroo_Class() : Prey_Class() { // Constructor


};
//could be deleted as this wont have any effect on the population
void Kangaroo_Class::eat() {

};
//decreases the kangroo population
void Kangaroo_Class::die() {
	kangroo_population--;
}
//increases the kangaroo population
void Kangaroo_Class::bread() {
	kangroo_population++;
}
//sets the kangroo population
void Kangaroo_Class::set_kangaroo_population(int k) {
	kangroo_population = k;
};
//returns the kangaroo population
int Kangaroo_Class::get_kangaroo_population() {
	return kangroo_population;
}
Kangaroo_Class::~Kangaroo_Class() {

};




