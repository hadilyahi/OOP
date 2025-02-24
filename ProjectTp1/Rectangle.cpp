#include "Rectangle.h"

Rectangle::Rectangle(double l, double w) : length(l), width(w) {
    calculateProperties();
}

void Rectangle::calculateProperties() {
    area = length * width;
    perimeter = 2 * (length + width);
}

void Rectangle::draw() const {
    std::cout << "Drawing a Rectangle with length: " << length << " and width: " << width << std::endl;
    std::cout << "Area: " << area << ", Perimeter: " << perimeter << std::endl;
}
