/*
Exercise 1: Gaussian Sum
Write a program that reads a positive integer n and prints the result of the sum
1 + 2 + . . . + n.
For example, for n = 100 the result is 5050.
*/
#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << sum;

    return 0;
}
