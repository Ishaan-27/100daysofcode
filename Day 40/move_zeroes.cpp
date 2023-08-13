#include <iostream>
#include <vector>

void moveZeroes(std::vector<int>& nums) {
    int nonZeroIndex = 0;

    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] != 0) {
            nums[nonZeroIndex++] = nums[i];
        }
    }

    while (nonZeroIndex < nums.size()) {
        nums[nonZeroIndex++] = 0;
    }
}

int main() {
    std::vector<int> nums = {0, 1, 0, 3, 12};

    moveZeroes(nums);

    std::cout << "Array after moving zeroes to the end: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
