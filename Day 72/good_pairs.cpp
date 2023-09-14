#include <iostream>
#include <vector>

int countGoodPairs(std::vector<int>& nums) {
    int count = 0;
    int n = nums.size();

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 1, 1, 3};
    int result = countGoodPairs(nums);
    std::cout << "Number of good pairs: " << result << std::endl;
    return 0;
}
