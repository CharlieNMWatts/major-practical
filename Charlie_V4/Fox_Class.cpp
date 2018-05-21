#include <iostream>
#include "Animal_Class.hpp"
#include "Predator_Class.hpp"
#include "Fox_Class.hpp"
#include <stdio.h>

using namespace std;

Fox_Class::Fox_Class() :Predator_Class(){

	

};
	void Fox_Class::eat(){
		
	}
	void Fox_Class::set_fox_population(int f){
		fox_population = f;
	}
	int Fox_Class::get_fox_population(){
		return fox_population;
	}
Fox_Class::~Fox_Class(){

};
