#include <iostream>
using namespace std;
class Car {
    public:
    string brand,color;
    int year;
    // Constructor
    Car(string b, int y ,string a) {
    brand = b;
    year = y;
    color=a;
    cout << "Car created: " << brand << endl;
    }
    // Destructor
    ~Car() {
    cout << "Car destroyed: " << brand << endl;
    }
    // Method to display information
    void displayInfo() {
    cout << "Car: " << brand << " (" << year << ")"  << " (" << color << ")" << endl;
    }
    };
    

        int main() {
            // Create objects

            
            Car myCar("Range Rover", 2025,"Black");
            myCar.displayInfo(); // Output: Car: Toyota (2020)
            // When the object goes out of scope, the destructor is called automatically
            return 0;
            }