#include <iostream>
#include <string>

class Person {
    private:

    std::string first ;
    std::string last ;
    public:
    void setFirstName(std::string firstName){
        first = firstName;
    }
    void setLastName(std::string lastName){
        last = lastName;
    }
    std::string getName(){
        return first + "" + last ;
    }
    void printFullName() {
        std::cout << first << " " << last << std::endl;
    }


};

int main(){
    Person p ;
    p.setFirstName("Yahi");
    p.setLastName("Hadil");
    std:: cout<< p.getName() << std::endl;
    p.printFullName();

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
}