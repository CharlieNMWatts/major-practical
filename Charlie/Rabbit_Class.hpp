#ifndef Rabbit_Class_hpp
#define Rabbit_Class_hpp
#include <stdio.h>
#include <iostream>
#include "Animal_Class.hpp"
#include "Prey_Class.hpp"


using namespace std;

class Rabbit_Class : public Prey_Class
{
public:
	Rabbit_Class();
	virtual void eat();
	~Rabbit_Class();

};
#endif