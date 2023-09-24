#include <iostream>
using namespace std;

// Recursive function to read and then print integers in reverse order
void reverseSequence() {
    int x;
    if (cin >> x) {
        // First go deeper into the recursion
        reverseSequence();
        // Then print the integers as you "come back"
        cout << x << " ";
    }
}

int main() {
    reverseSequence();
    cout << endl;  // Newline for formatting
    return 0;
}
