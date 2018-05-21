

#ifndef Animal_Class_hpp
#define Animal_Class_hpp
#include <stdio.h>
#include <iostream>

using namespace std;



class Animal_Class
{
public:
	//virtual Animal_Class(){};// removed contructor because of error

		virtual void eat();
		void bread();
		void die();
		virtual void set_population();
		virtual void get_population();

	// ~Animal_Class(){ };
protected:
	int age;
	int population = Predator_Population + Prey_Population;



};







#endif /* Animal_Class_hpp */
