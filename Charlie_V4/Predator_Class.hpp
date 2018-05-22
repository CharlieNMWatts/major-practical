#ifndef Predator_Class_hpp
#define Predator_Class_hpp
#include <stdio.h>
#include <iostream>
#include "Animal_Class.hpp"
using namespace std;

class Predator_Class: public Animal_Class{
public:
    Predator_Class();
    void eat();
    void set_population();
    void get_population();


    ~Predator_Class();
protected:
	int Predator_Population;


};





#endif

