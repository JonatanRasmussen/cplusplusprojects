// Exercise 5. Write a program that reads an integer n, and then
// reads n floats, and prints their sum. For example, if you run
// the program and type ”4 1 2 3 10.2” the program should print ”16.2”.

#include <iostream>

using namespace std;

int main() {
    int n;
    float number, sum = 0.0;

    // Prompt the user for the number of floats to sum
    cin >> n;

    // Prompt the user for the floats and calculate their sum
    for (int i = 0; i < n; ++i) {
        cin >> number;
        sum += number;
    }

    // Print the sum
    cout << sum << endl;

    return 0;
}