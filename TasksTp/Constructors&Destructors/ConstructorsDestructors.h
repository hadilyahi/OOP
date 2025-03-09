#ifndef ConstructorsDestructors_H
#define ConstructorsDestructors_H
#include <iostream>

using namespace std;


class Car
{

   
public:
    string Brand; 
    string Model;
    int year;
    void displayInfo();
    Car ( string b, string m, int y);
    Car( string b, string m);
    ~Car ();
};




#endif  // ConstructorsDestructors_H