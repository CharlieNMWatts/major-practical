#ifndef Fox_Class_hpp
#define Fox_Class_hpp
#include <stdio.h>
#include <iostream>
#include "Animal_Class.hpp"
#include "Predator_Class.hpp"

using namespace std;

class Fox_Class :   Predator_Class
{
public:
	Fox_Class();
	void eat();
	void bread();
	void set_fox_population(int f);
	int get_fox_population();
	~Fox_Class();

private:
	int fox_population;

};



#endif
