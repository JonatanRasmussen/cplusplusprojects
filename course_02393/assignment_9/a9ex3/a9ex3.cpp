#include <iostream>
#include <vector>
using namespace std;

// Recursive function to read numbers into a vector
void readNumbers(vector<int>& nums) {
    int n;
    if (cin >> n) {
        nums.push_back(n);
        readNumbers(nums);
    }
}

// Recursive function to check if a sequence is a palindrome
bool isPalindrome(const vector<int>& nums, int start, int end) {
    if (start >= end) {
        return true;  // Base case: single element or empty sequence is a palindrome
    }
    if (nums[start] != nums[end]) {
        return false;  // Base case: mismatch found
    }
    return isPalindrome(nums, start + 1, end - 1);  // Recursive case
}

int main() {
    vector<int> nums;
    readNumbers(nums);  // Read numbers into the vector

    if (isPalindrome(nums, 0, nums.size() - 1)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
