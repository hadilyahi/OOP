#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w);
    void calculateProperties() override;
    void draw() const override;
};

#endif // RECTANGLE_H
