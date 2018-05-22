#include <iostream>
#include "Animal_Class.hpp"
#include "Prey_Class.hpp"
#include "Kangaroo_Class.hpp"
#include <stdio.h>

using namespace std;

Kangaroo_Class::Kangaroo_Class() : Prey_Class() { // Constructor


};
void Kangaroo_Class::eat() {

};

void Kangaroo_Class::set_kangaroo_population(int k){
	kangroo_population = k;
};
int Kangaroo_Class::get_kangaroo_population(){
	return kangroo_population;
}
Kangaroo_Class::~Kangaroo_Class() {

};




