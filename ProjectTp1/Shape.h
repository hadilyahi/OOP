#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <cmath>

class Shape {
protected:
    double area;
    double perimeter;

public:
    virtual void calculateProperties() = 0;
    virtual void draw() const = 0;
    virtual ~Shape() {}
};

#endif // SHAPE_H
