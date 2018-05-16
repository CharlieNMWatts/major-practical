#include <iostream>
#include "Animal_Class.hpp"
#include "Predator_Class.hpp"
#include <stdio.h>

using namespace std;

Predator_Class::Predator_Class(){
    cout << "got to Predator Class constructor" << endl;
};

Predator_Class::~Predator_Class(){
    cout << "got to predator class destructor" << endl;
};
