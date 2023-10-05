#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int maxProductDifference(std::vector<int>& nums) {
        if (nums.size() < 4) {
            // Handle the case when there are fewer than 4 elements.
            // You can return an appropriate value or throw an exception.
            // Here, I'm returning -1 as a placeholder value.
            return -1;
        }

        std::sort(nums.begin(), nums.end());
        int n = nums.size();

        int maxProduct = nums[n - 1] * nums[n - 2];
        int minProduct = nums[0] * nums[1];

        return maxProduct - minProduct;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {4, 2, 6, 8, 3, 1};
    int result = solution.maxProductDifference(nums);
    std::cout << "Max Product Difference: " << result << std::endl;
    return 0;
}
