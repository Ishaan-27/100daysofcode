#include <iostream>
#include <vector>
#include <string>

int performOperations(const std::vector<std::string>& operations) {
    int X = 0; // Initial value of X

    for (const std::string& op : operations) {
        if (op == "++X" || op == "X++") {
            X++;
        } else if (op == "--X" || op == "X--") {
            X--;
        }
    }

    return X;
}

int main() {
    std::vector<std::string> operations = {"++X", "--X", "X++", "X--", "++X", "X--"};
    int finalValue = performOperations(operations);
    std::cout << "Final value of X: " << finalValue << std::endl;

    return 0;
}
