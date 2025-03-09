#include <iostream>
#include "ClassObject.h"
using namespace std;

int main(){
    Book myBook;
    myBook.title = "The Alchemist";
    myBook.author = "Paulo Coelho";
    myBook.year = 1988;
    myBook.displayInfo();
    return 0;
}