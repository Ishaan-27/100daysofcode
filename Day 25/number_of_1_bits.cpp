#include <iostream>

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;  

        while (n > 0) {
            if (n & 1)  
                count++;

            n = n >> 1;
        }

        return count;  
    }
};

int main() {
    Solution solution;
    uint32_t n = 53;  
    int result = solution.hammingWeight(n);
    std::cout << "Hamming weight of " << n << " is: " << result << std::endl;
    return 0;
}
