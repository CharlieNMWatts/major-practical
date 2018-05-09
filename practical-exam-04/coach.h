#ifndef COACH_H
#define COACH_H
#include <string>
#include <iostream>
using namespace std;

class Coach{
public:
	Coach();
	Coach(string n, int sl);


	void set_ID(int nextID);

private:
	static int nextID;
};

#endif COACH_H