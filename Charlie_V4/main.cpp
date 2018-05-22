

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







//not final control loop
//need another if statemet to make sure user enters enough time

for (int i = 2; i < (time + 2); ++i)
{
	cout << "it is day: "<< (i - 1) << endl;
	cout << "the current Rabbit population is " << r.get_rabbit_population() << endl;
	cout << "the current Kangaroo population is " << k.get_kangaroo_population() << endl;
	cout << "the current Dingo population is " << d.get_dingo_population() << endl;
	cout << "the cuurent fox population is " << f.get_fox_population() << endl;
	
	if(d.get_dingo_population() >= 2){ //checks that digo popualtion is 2 or more 
		
	
		if((i%12) == 0 ){//dingo bread trigger. is triggered 12th loop
		d.bread();
		}	
	}

	if(f.get_fox_population() >= 2){// fox bread trigger is every 8th loop
		if((i%8) ==0 ){
			f.bread();
		}
	}

	if(r.get_rabbit_population() >=2){ // rabbit bread trigger. is triggered every second loop
		if((i%2) == 0){
			r.bread();
		}
	}
	if(k.get_kangaroo_population() >= 2){ //triggered every fith loop
		if((i%5) == 0){
			k.bread();
		}
	}



// this part is suposed to be where the dingo and fox eat functions are called but for now just going to put the rabbit and kangroo die functions

		//this should be the fox eat funtion, and foxes eat a rabbit every 4 days
	if(r.get_rabbit_population() != 0){//checks to see if there are still rabbits to eat
		if((i%4)==0){
			r.die();
		}
	}
   
   //this is going to be the dingo eat function. dingos eat 3 rabbits or a kangroo every 5
   if(r.get_rabbit_population() && k.get_kangaroo_population()){
   	int j = rand() % 2; //gives j a random value of either 0 or 1 
   	if((i%5) == 0){
   		if(j == 0){
   			r.die();
   			r.die();
   			
   		}
   		if(j==1){
   			k.die();
   		}
   	}
   }
   
     

       

}




return 0;
 }
//for breading add an if break statment to check if popuation is above 2
//