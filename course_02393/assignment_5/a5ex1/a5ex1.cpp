#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> dataset_a;
    vector<int> dataset_b;
    string identifier;
    int value;

    // Step 1: Read datasets from cin
    while (cin >> identifier >> value) {
        if (identifier == "a") {
            dataset_a.push_back(value);
        } else if (identifier == "b") {
            dataset_b.push_back(value);
        }
    }

    // Step 2: Sort the datasets
    sort(dataset_a.begin(), dataset_a.end());
    sort(dataset_b.begin(), dataset_b.end());

    // Step 3: Write sorted datasets to cout
    // Write dataset_a
    for (size_t i = 0; i < dataset_a.size(); ++i) {
        cout << dataset_a[i];
        if (i != dataset_a.size() - 1) {
            cout << " ";
        }
    }

    // Write a space between dataset_a and dataset_b if both are non-empty
    if (!dataset_a.empty() && !dataset_b.empty()) {
        cout << " ";
    }

    // Write dataset_b
    for (size_t i = 0; i < dataset_b.size(); ++i) {
        cout << dataset_b[i];
        if (i != dataset_b.size() - 1) {
            cout << " ";
        }
    }

    cout << endl;
    return 0;
}
