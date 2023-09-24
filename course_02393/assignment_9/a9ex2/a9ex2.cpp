#include <iostream>
#include <vector>
using namespace std;

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base case
    }
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
}

// Function to read numbers into a vector
void readNumbers(vector<int>& nums) {
    int n;
    if (cin >> n) {
        nums.push_back(n);
        readNumbers(nums);
    }
}

int main() {
    vector<int> nums;
    readNumbers(nums);  // Read numbers into the vector

    for (int n : nums) {
        cout << fibonacci(n) << " ";
    }

    cout << endl;  // Newline for formatting
    return 0;
}
