#include <iostream>
#include "ConstructorsDestructors.h"
using namespace std;

int main(){
    Car myCar("Toyota", "Corolla", 2020);
    Car myCar2("Toyota", "Corolla");
    myCar.displayInfo();
    
    return 0;
}