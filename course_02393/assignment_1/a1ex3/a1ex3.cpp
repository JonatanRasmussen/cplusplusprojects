// Exercise 3. Write a program that reads two integer numbers
// (say, x and y) and prints ”x is equal to y” if x is equal to y;
// ”x is bigger than y” if x is greater than y;
// ”x is smaller than y” otherwise. For example, if you run the
// program and type ”1 2” the program should print ”1 is smaller than 2”.

#include <iostream>

using namespace std;

int main() {
    int x, y;

    // Prompt the user for input
    cin >> x >> y;

    // Compare the numbers and print the result
    if (x == y) {
        cout << "x is equal to y" << endl;
    } else if (x > y) {
        cout << "x is bigger than y" << endl;
    } else {
        cout << "x is smaller than y" << endl;
    }

    return 0;
}