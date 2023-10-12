#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        long long left = *max_element(nums.begin(), nums.end());
        long long right = accumulate(nums.begin(), nums.end(), 0LL);

        while (left < right) {
            long long mid = left + (right - left) / 2;
            if (isPossible(nums, k, mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }

private:
    bool isPossible(vector<int>& nums, int k, long long target) {
        int count = 1;
        long long currentSum = 0;

        for (int num : nums) {
            currentSum += num;
            if (currentSum > target) {
                count++;
                currentSum = num;
            }
            if (count > k) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    vector<int> nums = {7, 2, 5, 10, 8};
    int k = 2;

    Solution solution;
    int result = solution.splitArray(nums, k);
    cout << "The minimized largest sum of the split is: " << result << endl;

    return 0;
}
