#ifndef Dingo_Class_hpp
#define Dingo_Class_hpp
#include <stdio.h>
#include <iostream>
#include "Animal_Class.hpp"
#include "Predator_Class.hpp"

using namespace std;

class Dingo_Class :  public Predator_Class 
{
public:
	Dingo_Class();
		 void eat();
	~Dingo_Class();

};


#endif