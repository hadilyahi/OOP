#include "ClassObject.h"
#include <iostream>
using namespace std;


void Book::displayInfo() {
    cout << "Book: " << title << " (" << year << ") by " << author << endl;
}

Book::Book( ) {
    title = " ";
    author = " ";
    year = 0;
    cout << "Book created" << endl;
}
Book::~Book() { 
    std::cout << "Book Destroyed" << std::endl;
}
