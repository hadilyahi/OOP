#include <iostream>
#include <string>
#include "oop.h"

using namespace std;

int main(){
    // class - describes the structure 
    // object - a specific example of that structure (instanse)
    // instanse - another name of object
    // instantiating - creating an object from a class
    // data members - variables 
    // methods - functions
    // abstraction --- a concept where you make something easy by hiding the complicated stuff
    // encapsulation --- granting access to privete data only throungh controlled public interfaces
    // inheritance ---  we can create  derived classses that inherit properties from their parent classes
    // polymorphism --- we can treat multiple difrrent objects as their base object type
    
    Rectangle r1 , r2;
    r1.setWidth(5);
    r1.setHeight(10);
    cout << r1.getWidth() << endl;
    cout << r1.getHeight() << endl;
    cout << r1.getArea() << endl;

   


} 