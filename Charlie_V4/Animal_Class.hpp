

#ifndef Animal_Class_hpp
#define Animal_Class_hpp
#include <stdio.h>
#include <iostream>

using namespace std;



class Animal_Class
{
public:
	// Animal_Class(){};// removed contructor because of error

	virtual void eat();
	void bread();
	void die();
	void set_population(int pop);
	void get_population();

	// ~Animal_Class(){ };
protected:
	int age;
	int population;



};







#endif /* Animal_Class_hpp */
