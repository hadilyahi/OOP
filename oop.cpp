#include "oop.h"
#include <iostream>
 using namespace std;

float Rectangle::getWidth(){
    return width;
}
void Rectangle::setHeight(float h){
    if (h >= 0) {
        height = h;
    } else {
        cout << "Height must be positive" << endl;
    }
}

float Rectangle::getHeight(){
    return height;
}
void Rectangle::setWidth(float w){
    if (w >= 0) {
        width = w;
    } else {
        cout << "Width must be positive" << endl;
    }
}

float Rectangle::getArea(){
    return width * height;
}