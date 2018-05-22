#ifndef Rabbit_Class_hpp
#define Rabbit_Class_hpp
#include <stdio.h>
#include <iostream>
#include "Animal_Class.hpp"
#include "Prey_Class.hpp"


using namespace std;

class Rabbit_Class :  public Prey_Class
{
public:
	Rabbit_Class();
	 void eat();
	 void bread();
	 void die();

	 void set_rabbit_population(int r);
	 int get_rabbit_population();

	~Rabbit_Class();

private:
	int rabbit_population;


};
#endif