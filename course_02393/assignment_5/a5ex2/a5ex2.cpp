#include <iostream>
#include <vector>

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

    // Step 2: Interleave the datasets and write to cout
    size_t len_a = dataset_a.size();
    size_t len_b = dataset_b.size();
    size_t max_len = max(len_a, len_b);

    for (size_t i = 0; i < max_len; ++i) {
        if (i < len_a) {
            cout << dataset_a[i];
            cout << " ";
        }

        if (i < len_b) {
            cout << dataset_b[i];
            if (i != max_len - 1 || (i == max_len - 1 && i >= len_a)) {
                cout << " ";
            }
        }
    }
    cout << endl;
    return 0;
}
