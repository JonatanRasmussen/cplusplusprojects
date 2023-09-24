#ifndef __shapes__
#define __shapes__

class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual double height() const = 0;
    virtual double width() const = 0;
    virtual void rotate() = 0;
};

class Rectangle : public Shape {
public:
    Rectangle(double height, double width);
    double area() const override;
    double perimeter() const override;
    double height() const override;
    double width() const override;
    void rotate() override;
private:
    double h;
    double w;
};

class Square : public Rectangle {
public:
    Square(double side);
};

class Circle : public Shape {
public:
    Circle(double radius);
    double area() const override;
    double perimeter() const override;
    double height() const override;
    double width() const override;
    void rotate() override;
private:
    double r;
};

#endif
