#include <vector>
#include <algorithm>

class Solution {
public:
    int findGCD(std::vector<int>& nums) {
        // Check if the input vector is empty
        if (nums.empty()) {
            return 0; // Return 0 if the vector is empty (no GCD defined)
        }

        // Find the minimum and maximum numbers in the vector
        int min_num = *std::min_element(nums.begin(), nums.end());
        int max_num = *std::max_element(nums.begin(), nums.end());

        // Calculate the GCD using a simple loop
        int gcd = 1; // Initialize GCD to 1

        for (int i = 1; i <= min_num && i <= max_num; ++i) {
            if (min_num % i == 0 && max_num % i == 0) {
                gcd = i; // Update GCD if 'i' divides both min_num and max_num
            }
        }

        return gcd;
    }
};
