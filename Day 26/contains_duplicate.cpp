#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());

        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1])
                return true;
        }
        return false;
    }
};

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 1};
    Solution solution;
    
    if (solution.containsDuplicate(nums)) {
        std::cout << "The array contains duplicate values." << std::endl;
    } else {
        std::cout << "The array does not contain any duplicate values." << std::endl;
    }

    return 0;
}
