#include <iostream>
#include <numeric>  // for std::gcd

class fraction {
private:
    int numerator;
    int denominator;

    // Function to simplify the fraction
    void simplify() {
        int gcd = std::gcd(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
    }

public:
    // Class constructor
    fraction(int n, int d): numerator(n), denominator(d) {
        simplify();
    }

    // Methods to update the fraction
    void add(fraction f) {
        numerator = numerator * f.denominator + f.numerator * denominator;
        denominator *= f.denominator;
        simplify();
    }

    void mult(fraction f) {
        numerator *= f.numerator;
        denominator *= f.denominator;
        simplify();
    }

    void div(fraction f) {
        numerator *= f.denominator;
        denominator *= f.numerator;
        simplify();
    }

    // Display method
    void display() {
        std::cout << numerator << " / " << denominator << std::endl;  // Use std::endl to move to the next line
    }
};

int main() {
    int a, b, c, d;
    std::string op;
    char slash;

    while(true) {
        std::cin >> a >> slash >> b >> op >> c >> slash >> d;

        if(std::cin.fail()) {
            break;
        }

        fraction f1(a, b), f2(c, d);

        if(op == "+") {
            f1.add(f2);
        }
        else if(op == "*") {
            f1.mult(f2);
        }
        else if(op == "div") {
            f1.div(f2);
        }

        f1.display();
    }

    return 0;
}
