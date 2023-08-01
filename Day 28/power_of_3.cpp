#include <iostream>

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0)
            return false;

        while (n % 3 == 0) {
            n /= 3;
        }

        return n == 1;
    }
};

int main() {
    Solution solution;
    int num;
    
    std::cout << "Enter a number: ";
    std::cin >> num;

    bool result = solution.isPowerOfThree(num);
    if (result) {
        std::cout << num << " is a power of three." << std::endl;
    } else {
        std::cout << num << " is NOT a power of three." << std::endl;
    }

    return 0;
}
