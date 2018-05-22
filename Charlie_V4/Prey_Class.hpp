#ifndef Prey_Class_hpp
#define Prey_Class_hpp
#include <stdio.h>
#include <iostream>
#include "Animal_Class.hpp"


using namespace std;


class Prey_Class: public Animal_Class
{
public:
	Prey_Class();
		 void eat();
		 void set_prey_population();
		 void get_prey_population();
	~Prey_Class();
protected:
	int Prey_Population;

};

#endif
