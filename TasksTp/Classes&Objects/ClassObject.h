#ifndef ClassObject_H
#define ClassObject_H
#include <iostream>

using namespace std;


class Book 
{

   
public:
    string title;
    string author;
    int year;
    void displayInfo();
    Book ();
    ~Book ();
};




#endif // ClassObject_H