#include "Circle.h"
#include "Rectangle.h"

int main() {
    Shape* shapes[] = { new Circle(5), new Rectangle(4, 6) , new Circle(8), new Rectangle(2, 3)};

    for (Shape* shape : shapes) {
        shape->draw();
        std::cout << "---------------------------" << std::endl;
    }

    for (Shape* shape : shapes) {
        delete shape;
    }

    return 0;
}
