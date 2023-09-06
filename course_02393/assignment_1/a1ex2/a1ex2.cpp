// Exercise 2. Write a program that reads a string (say name)
// from the command line and then prints ”Hello name!”.
// For example, if you run the program and type ”buddy”
// the program should print ”Hello buddy!”.

#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;

    // Prompt the user for input
    cin >> name;

    // Print the greeting
    cout << "Hello " << name << "!" << endl;

    return 0;
}