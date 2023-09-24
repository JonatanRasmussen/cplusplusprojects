#include <iostream>
#include <vector>
#include <string>
#include <tuple>  // Include for std::tuple and std::make_tuple

// Node class for the Fibonacci tree
struct FibNode {
    int value;
    FibNode* left;
    FibNode* right;
    FibNode(int v) : value(v), left(nullptr), right(nullptr) {}
};

// Function to build the Fibonacci tree and return the Fibonacci value of the root
std::pair<FibNode*, int> build_fib_tree(int n) {
    if (n == 0 || n == 1) {
        return std::make_pair(new FibNode(1), 1);
    }

    FibNode* root = new FibNode(n);
    auto left_pair = build_fib_tree(n - 1);
    auto right_pair = build_fib_tree(n - 2);

    root->left = left_pair.first;
    root->right = right_pair.first;
    root->value = left_pair.second + right_pair.second;

    return std::make_pair(root, root->value);
}

// Function to perform pre-order traversal on the tree and collect the values and statistics
std::tuple<int, int, int> pre_order_fib_tree(FibNode* root, std::vector<int>& values) {
    if (root == nullptr) {
        return std::make_tuple(0, 0, 0);
    }

    values.push_back(root->value);
    int tree_size = 1;
    int tree_depth = 1;
    int tree_leaves = 0;

    auto [left_size, left_depth, left_leaves] = pre_order_fib_tree(root->left, values);
    auto [right_size, right_depth, right_leaves] = pre_order_fib_tree(root->right, values);

    tree_size += left_size + right_size;
    tree_depth += std::max(left_depth, right_depth);
    tree_leaves = left_leaves + right_leaves;

    if (root->left == nullptr && root->right == nullptr) {
        tree_leaves += 1;
    }

    return std::make_tuple(tree_size, tree_depth, tree_leaves);
}

int main() {
    int n;
    std::cin >> n;

    auto [root, _] = build_fib_tree(n);
    std::vector<int> values;
    auto [tree_size, tree_depth, tree_leaves] = pre_order_fib_tree(root, values);

    std::cout << "Call tree in pre-order: ";
    for (const auto& val : values) {
        std::cout << val << " ";
    }
    std::cout << "\nCall tree size: " << tree_size
              << "\nCall tree depth: " << tree_depth
              << "\nCall tree leafs: " << tree_leaves << std::endl;

    return 0;
}
