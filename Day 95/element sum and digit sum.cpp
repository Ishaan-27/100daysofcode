#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int es = 0, ds = 0;
        for (auto i : nums) {
            es += i;
            while (i) {
                ds += i % 10;
                i /= 10;
            }
        }
        return abs(es - ds);
    }
};

int main() {
    Solution solution;
    vector<int> nums = {123, 456, 789};

    int result = solution.differenceOfSum(nums);
    cout << "Difference of Sum: " << result << endl;

    return 0;
}
