#ifndef Dingo_Class_hpp
#define Dingo_Class_hpp
#include <stdio.h>
#include <iostream>
#include "Animal_Class.hpp"
#include "Predator_Class.hpp"
#include "Kangaroo_Class.hpp"

using namespace std;

class Dingo_Class :  public Predator_Class
{
public:
	Dingo_Class();
	void eat(Kangaroo_Class k);
	void bread();


	void set_dingo_population(int d);
	int get_dingo_population();
	~Dingo_Class();

private:
	int dingo_population;

};


#endif