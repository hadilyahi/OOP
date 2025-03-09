#include "Encapsulation.h"
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

Car::~Car() { 
    std::cout << "Car Destroyed" << std::endl;
}

void Car::setBrand(string b) {
    Brand = b;
}

void Car::setModel(string m) {
    Model = m;
}

void Car::setYear(int y) {
    year = y;
}
string Car::getBrand() {
    return Brand;
}

string Car::getModel() {
    return Model;
}

int Car::getYear() {
    return year;
}


