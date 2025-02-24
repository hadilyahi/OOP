#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r);
    void calculateProperties() override;
    void draw() const override;
};

#endif // CIRCLE_H
