/*
Exercise 2: Prime Factorization
Write a program that reads a positive integer and prints its prime factorisation.
For instance, the factorisation of 60 is 2 ∗ 2 ∗ 3 ∗ 5.
*/
#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    for (int i = 2; i <= n; ++i) {
        while (n % i == 0) {
            cout << i;
            n /= i;
            if (n > 1) {
                cout << " * ";
            }
        }
    }

    cout << endl;

    return 0;
}
