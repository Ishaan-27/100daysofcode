#include <iostream>
#include <vector>
#include <unordered_map>

int majorityElement(std::vector<int>& nums) {
    int n = nums.size();
    std::unordered_map<int, int> freq;

    for (int num : nums) {
        freq[num]++;
        if (freq[num] > n / 2) {
            return num;
        }
    }

    // The majority element always exists, so we won't reach here.
    return -1;
}

int main() {
    // Example usage:
    std::vector<int> nums = {2, 2, 3, 2, 4, 2, 2};
    int majority = majorityElement(nums);
    std::cout << "The majority element is: " << majority << std::endl;
    return 0;
}
