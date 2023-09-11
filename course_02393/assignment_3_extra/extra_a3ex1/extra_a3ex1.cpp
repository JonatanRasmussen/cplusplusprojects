#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n <= 1) {
        // A sequence of 0 or 1 number is always sorted
        std::cout << "SORTED" << std::endl;
        return 0;
    }

    int prev, current;
    bool isSorted = true;

    std::cin >> prev; // Read the first number

    for (int i = 1; i < n; i++) {
        std::cin >> current; // Read the next number

        if (current < prev) {
            isSorted = false;
            break;
        }

        prev = current;
    }

    if (isSorted) {
        std::cout << "SORTED" << std::endl;
    } else {
        std::cout << "UNSORTED" << std::endl;
    }

    return 0;
}
