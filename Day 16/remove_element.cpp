#include <iostream>
#include <vector>

class Solution {
public:
    int searchInsert(std::vector<int>& a, int k) {
        int n = a.size();

        if (k > a[n - 1])
            return n;

        int l = 0, r = n - 1;

        while (l < r) {
            int m = l + (r - l) / 2;

            if (a[m] >= k) {
                r = m;
            } else {
                l = m + 1;
            }
        }

        return l;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {1, 3, 5, 6};
    int target = 5;

    int result = solution.searchInsert(nums, target);
    std::cout << "Insert position: " << result << std::endl;

    return 0;
}
