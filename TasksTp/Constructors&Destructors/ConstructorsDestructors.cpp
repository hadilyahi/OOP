#include "ConstructorsDestructors.h"
#include <iostream>
using namespace std;


void Car::displayInfo() {
    cout << "Car: " << Brand << " " << Model << " (" << year << ")" << endl;
}

Car::Car(string b, string m, int y) {
    Brand = b;
    Model = m;
    year = y;
    cout << "Car created" << endl;
}
Car::Car(string b, string m) {
    Brand = b;
    Model = m;
    cout << "Car created" << endl;
}
Car::~Car() { 
    std::cout << "Car Destroyed" << std::endl;
}
