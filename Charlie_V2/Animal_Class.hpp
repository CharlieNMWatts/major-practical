

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
		void set_population(int a);
		void get_population();

	// ~Animal_Class(){ };
private:
	int age;
	double population;



};







#endif /* Animal_Class_hpp */
