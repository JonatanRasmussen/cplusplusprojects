// Exercise 4. Write a program that reads three double numbers
// (say, x, y and z) and prints the result of the expression
// (x + y) − z. For example, if you run the program and type ”1 2 3”
// the program should print ”0”.

#include <iostream>

using namespace std;

int main() {
    double x, y, z;

    // Prompt the user for input
    cin >> x >> y >> z;

    // Calculate and print the result of the expression
    double result = (x + y) - z;
    cout << "Result: " << result << endl;

    return 0;
}