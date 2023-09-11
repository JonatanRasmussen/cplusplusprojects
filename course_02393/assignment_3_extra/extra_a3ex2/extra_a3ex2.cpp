#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    if (n == 0) {
        std::cout << std::endl;
        return 0;
    }

    std::vector<int> numbers(n);
    int largest = 0;

    for (int i = 0; i < n; i++) {
        std::cin >> numbers[i];
        if (numbers[i] > numbers[largest]) {
            largest = i;
        }
    }

    for (int i = 0; i < n; i++) {
        if (i == largest) {
            std::cout << "*";
        }
        std::cout << numbers[i];
        if (i == largest) {
            std::cout << "*";
        }
        if (i < n - 1) {
            std::cout << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
