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
    ~Predator_Class();


};





#endif

