#include <iostream>

class Solution {
public:
    bool divisorGame(int n) {
        if (n % 2 == 0) {
            return true;
        }
        return false;
    }
};

int main() {
    int n;
    std::cout << "Enter the initial number (n): ";
    std::cin >> n;

    Solution solution;
    bool aliceWins = solution.divisorGame(n);

    if (aliceWins) {
        std::cout << "Alice wins the game!" << std::endl;
    } else {
        std::cout << "Alice loses the game." << std::endl;
    }

    return 0;
}
