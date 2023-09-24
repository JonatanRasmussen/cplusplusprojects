#include "shapes.h"
#include <cmath>

// Rectangle
Rectangle::Rectangle(double height, double width) : h(height), w(width) {}

double Rectangle::area() const {
    return h * w;
}

double Rectangle::perimeter() const {
    return 2 * (h + w);
}

double Rectangle::height() const {
    return h;
}

double Rectangle::width() const {
    return w;
}

void Rectangle::rotate() {
    std::swap(h, w);
}

// Square
Square::Square(double side) : Rectangle(side, side) {}

// Circle
Circle::Circle(double radius) : r(radius) {}

double Circle::area() const {
    return M_PI * std::pow(r, 2);
}

double Circle::perimeter() const {
    return 2 * M_PI * r;
}

double Circle::height() const {
    return 2 * r;
}

double Circle::width() const {
    return 2 * r;
}

void Circle::rotate() {
    // Nothing to do here; rotating a circle doesn't change it
}
