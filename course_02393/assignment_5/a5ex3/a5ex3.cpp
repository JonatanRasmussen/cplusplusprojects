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

    // Step 2: Compute the scalar product
    int scalar_product = 0;
    size_t len_a = dataset_a.size();
    size_t len_b = dataset_b.size();
    size_t min_len = min(len_a, len_b);

    for (size_t i = 0; i < min_len; ++i) {
        scalar_product += dataset_a[i] * dataset_b[i];
    }

    if (len_a > min_len) {
        for (size_t i = min_len; i < len_a; ++i) {
            scalar_product += dataset_a[i] * 0;
        }
    } else if (len_b > min_len) {
        for (size_t i = min_len; i < len_b; ++i) {
            scalar_product += dataset_b[i] * 0;
        }
    }

    // Step 3: Output the scalar product
    cout << scalar_product << endl;

    return 0;
}
