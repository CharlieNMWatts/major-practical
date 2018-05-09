#include "person.h"
#include "coach.h"
#include <iostream>
#include <string>
using namespace std;

Coach::Coach(){
	string n;
	int sl;
	int nextID;
}

Coach::Coach(string n, int sl){
	salary = sl;
	name = n;
}

void Coach::get_ID(int nextID){
	personID = nextID;
}