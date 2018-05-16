#ifndef Kangaroo_Class_hpp
#define Kangaroo_Class_hpp
#include <stdio.h>
#include <iostream>
#include "Animal_Class.hpp"
#include "Prey_Class.hpp"

using namespace std;

class Kangaroo_Class: public Prey_Class
{
public:
	Kangaroo_Class();
	~Kangaroo_Class();
	
};



#endif
