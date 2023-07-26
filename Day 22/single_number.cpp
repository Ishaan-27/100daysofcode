#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i += 2) {
            if (nums[i] != nums[i - 1])
                return nums[i - 1];
        }
        return nums[nums.size() - 1];
    }
};

int main() {
    Solution solution;

    std::vector<int> nums = {4, 1, 2, 1, 2};
    int result = solution.singleNumber(nums);
    std::cout << "The single number is: " << result << std::endl;

    return 0;
}
