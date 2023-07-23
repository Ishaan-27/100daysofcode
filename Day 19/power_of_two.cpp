#include <iostream>

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false; 
        if (n == 1) return true;  

                return n % 2 == 0 and isPowerOfTwo(n / 2);
    }
};

int main() {
    Solution solution;

    // Test cases
    std::cout << solution.isPowerOfTwo(1) << std::endl; // Output: 1 (true)
    std::cout << solution.isPowerOfTwo(16) << std::endl; // Output: 1 (true)
    std::cout << solution.isPowerOfTwo(64) << std::endl; // Output: 1 (true)
    std::cout << solution.isPowerOfTwo(17) << std::endl; // Output: 0 (false)
    std::cout << solution.isPowerOfTwo(0) << std::endl; // Output: 0 (false)
    std::cout << solution.isPowerOfTwo(-8) << std::endl; // Output: 0 (false)

    return 0;
}
