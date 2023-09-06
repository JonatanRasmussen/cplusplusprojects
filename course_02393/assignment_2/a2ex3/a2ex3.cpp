/*
Exercise 3: Approximating π
Compute an approximation of π using the Leibniz formula.
*/

#include <iostream>

using namespace std;

// Function for Leibniz formula
double pi(int n) {
    double sum = 0.0;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            sum += 1.0 / (2 * i + 1);
        } else {
            sum -= 1.0 / (2 * i + 1);
        }
    }

    return sum * 4;
}

int main() {
    int n;

    cin >> n;

    double approximation = pi(n);

    cout << approximation << endl;

    return 0;
}

