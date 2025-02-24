#include "Circle.h"

Circle::Circle(double r) : radius(r) {
    calculateProperties();
}

void Circle::calculateProperties() {
    area = M_PI * radius * radius;
    perimeter = 2 * M_PI * radius;
}

void Circle::draw() const {
    std::cout << "Drawing a Circle with radius: " << radius << std::endl;
    std::cout << "Area: " << area << ", Perimeter: " << perimeter << std::endl;
}
