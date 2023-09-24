#include <iostream>
#include <string>
#include <algorithm> // for std::min
using namespace std;

// Recursive function to calculate the Levenshtein distance
int levenshtein(const string& u, const string& v) {
    // Base cases
    if (u.empty()) return v.length();
    if (v.empty()) return u.length();

    // Calculate cost for substitution
    int cost = (u[0] == v[0]) ? 0 : 1;

    return min({
        levenshtein(u.substr(1), v) + 1,                          // Deletion
        levenshtein(u, v.substr(1)) + 1,                          // Insertion
        levenshtein(u.substr(1), v.substr(1)) + cost              // Substitution or match
    });
}

int main() {
    string u, v;
    cin >> u;
    cin >> v;

    int distance = levenshtein(u, v);
    cout << distance << endl;

    return 0;
}
