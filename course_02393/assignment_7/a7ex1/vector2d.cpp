#include "vector2d.h"
#include <cmath>

// Standard constructor: builds a vector (a, b)
v2d::v2d(double a, double b) : x(a), y(b) {
    // Nothing to do here
}

// Copy constructor: builds a vector that is exactly like v
v2d::v2d(const v2d & v) : x(v.x), y(v.y) {
    // Nothing to do here
}

// Destructor
v2d::~v2d() {
    // Nothing to do here
}

// Assignment operator: updates the vector to make it as v
v2d & v2d::operator=(const v2d &v) {
    x = v.x;
    y = v.y;
    return *this;
}

// Vector addition: updates the vector by adding v
v2d & v2d::operator+(const v2d &v) {
    x += v.x;
    y += v.y;
    return *this;
}

// Scalar multiplication: updates the vector by scaling by k
v2d & v2d::operator*(double k) {
    x *= k;
    y *= k;
    return *this;
}

// Scalar product of the current vector by another vector v
double v2d::operator*(const v2d &v) {
    return x * v.x + y * v.y;
}

// Returns the length of a vector
double v2d::length() {
    return std::sqrt((*this) * (*this));
}
