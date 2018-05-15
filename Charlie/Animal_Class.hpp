//
//  Animal_Class.hpp
//  
//
//  Created by Charlie Watts on 2/5/18.
//

#ifndef Animal_Class_hpp
#define Animal_Class_hpp
#include <stdio.h>
#include <iostream>

using namespace std;
/*Animal_Class:

functions:
	eat
	bread
	die

varibles
age


 */


class Animal_Class 
{
public:
	Animal_Class(){
		cout << "got to animal class contructor in header file" << endl;

	};// removed contructor because of error
	
		void eat();
		void bread();
		void die();
		void set_population(int a);
		void get_population();

	~Animal_Class();
private:
	int age;
	double population;



};







#endif /* Animal_Class_hpp */
