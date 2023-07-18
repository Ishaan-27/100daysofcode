#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};

int main() {
    
    Solution solution;

        vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    
    int length = solution.removeElement(nums, val);

    cout << "Modified vector: ";
    for (int i = 0; i < length; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "Modified vector length: " << length << endl;

    return 0;
}
