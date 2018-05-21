

#include <stdio.h>
#include <iostream>
#include "Animal_Class.hpp"
#include "Prey_Class.hpp"
#include "Predator_Class.hpp"
#include "Rabbit_Class.hpp"
#include "Kangaroo_Class.hpp"
#include "Fox_Class.hpp"
#include "Dingo_Class.hpp"

using namespace std;


int main(){
	int time = 0; // possible error if time is 0 or less
	int fox_input_popualtion=0;
	int dingo_input_population = 0;	
	int rabbit_input_population = 0;
	int kangroo_input_population = 0;
	Rabbit_Class r;
	Kangaroo_Class k;
	Dingo_Class d;
	Fox_Class f;

printf( "How much time would you like?\n");
cin >> time;
printf("how many Foxes would you like?\n");
 cin >> fox_input_popualtion;
 f.set_fox_population(fox_input_popualtion);
printf("how many Dingos would you like?\n");
  cin >> dingo_input_population;
  	d.set_dingo_population(dingo_input_population);
printf("how many rabbits would you like?\n");
 cin >> rabbit_input_population;
 	r.set_rabbit_population(rabbit_input_population);
printf("how many kangroos would you like?\n");
cin >> kangroo_input_population;
 	k.set_kangaroo_population(kangroo_input_population);









for (int i = 0; i < time; ++i)
{
	cout << "it is day: "<< i +1 << endl;
	cout << "the current Rabbit population is " << r.get_rabbit_population() << endl;
	cout << "the current Kangaroo population is " << k.get_kangaroo_population() << endl;
	cout << "the current Dingo population is " << d.get_dingo_population() << endl;
	cout << "the cuurent fox population is " << f.get_fox_population() << endl;



}


return 0;
 }
