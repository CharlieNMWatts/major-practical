// This code illustrates the example from slide 10 of the polymorphism lecture

/*
  Important Note: I have included the implementation of the make_sound() method
  inside the class definitions of Animal, Panda and Tiger in the code below
  This is permitted by C++, but for anything more than 
  a small example, the separation of the declaration (.h file) and the 
  implementation (.cpp) into different files is expected for each class.
*/

/*  Animal.cpp file */

#include <iostream>

class Animal
{
public:
  // try removing virtual  What happens?
  virtual void make_sound()
  {
    std::cout << "nothing" << std::endl;
  }
};



/* Panda.cpp */

class Panda : public Animal
{
public:
  void make_sound()
  {
    std::cout << "grrr -- rawr!" << std::endl;
  }
};


/* Tiger.cpp file */

class Tiger : public Animal
{
public:
  void make_sound()
  {
    std::cout << "meow -- roar!" << std::endl;
  }
};


/* main.cpp file */

using namespace std;

void talk(Animal * a)
{
  a->make_sound();
}


int main () 
{
  Tiger t;
  Panda b;
  talk(&t);
  talk(&b);
  return 0;
}


/* Try replacing the main code above by the code below to see the difference
   between using a pointer to an object of class Animal in procedure talk(..)
   and using an object of class Animal itself. 
   We lose polymorphism.  Why?  Remember that when we pass an object by 
   value to a function, we get a local object which copies the values of
   the object argument passed to the function.  So a is a local stack variable
   of type Animal that happens to have the values of the Tiger or Panda passed
   to the talk function.  So when make_sound() is called it is being called on
   an Animal.

   When we use pointers, we are passing the address of a Panda or Tiger.  
   So when make_sound() is called it is being called on a Panda or a Tiger.
*/

/*
  void talk(Animal a)
  {
  a.make_sound();
  }

  int main () 
  {
  Tiger t;
  Panda b;
  talk(t);
  talk(b);
  return 0;
  }
 */ 
  
