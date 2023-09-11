/*
Exercise 4: Remembering numbers
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers(1001, 0);
    int value;

    while (true) {
        cin >> value;

        if (value == 0) {
            break;
        }

        if (value >= 1 && value <= 1000) {

            cout << numbers[value] << endl;
            numbers[value]++;
        }
    }

    return 0;
}