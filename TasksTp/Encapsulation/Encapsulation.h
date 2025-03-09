
#ifndef Encapsulation_H
#define Encapsulation_H
#include <iostream>

using namespace std;


class Car
{
    private :
        string Brand; 
        string Model;
        int year;
    
    public:
        void displayInfo();
        void setBrand(string Brand);
    string getBrand();

    void setModel(string m);
    string getModel();

    void setYear(int y);
    int getYear();
        Car ( string b, string m, int y);
        ~Car ();
};




#endif // Encapsulation_H