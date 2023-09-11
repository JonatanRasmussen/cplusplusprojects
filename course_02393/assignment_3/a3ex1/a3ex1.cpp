#include <iostream>
#include <set>
#include <string>

// Fun with bags 1
int main() {
    std::set<int> bag;
    std::string queryResult; // Store query results

    std::string command;
    int x;

    while (std::cin >> command) {
        if (command == "add") {
            std::cin >> x;
            bag.insert(x);
        } else if (command == "del") {
            std::cin >> x;
            bag.erase(x);
        } else if (command == "qry") {
            std::cin >> x;
            if (bag.count(x) > 0) {
                queryResult += "T";
            } else {
                queryResult += "F";
            }
        } else if (command == "quit") {
            break;
        }
    }

    std::cout << queryResult << std::endl;

    return 0;
}




