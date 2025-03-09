#include <iostream>
#include "Encapsulation.h"

using namespace std;

int main(){
    Car c1("Toyota", "Corolla", 2020);
    c1.displayInfo();
    c1.setBrand("Honda");
    c1.setModel("Civic");
    c1.setYear(2019);
    c1.displayInfo();
    cout << "Brand: " << c1.getBrand() << endl;
    cout << "Model: " << c1.getModel() << endl;
    cout << "Year: " << c1.getYear() << endl;
    return 0;
}