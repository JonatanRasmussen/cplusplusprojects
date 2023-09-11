#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    if (n < 1) {
        std::cerr << "Vector length must be at least 1." << std::endl;
        return 1;
    }

    std::vector<double> u(n);
    std::vector<double> v(n);

    for (int i = 0; i < n; i++) {
        std::cin >> u[i];
    }

    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    double dotProduct = 0.0;

    for (int i = 0; i < n; i++) {
        dotProduct += u[i] * v[i];
    }

    std::cout << dotProduct << std::endl;

    return 0;
}
