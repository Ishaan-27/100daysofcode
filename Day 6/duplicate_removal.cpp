#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};

int main() {
    // Test the removeDuplicates method
    Solution solution;
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5, 5, 5};
    int length = solution.removeDuplicates(nums);
    
    cout << "New length: " << length << endl;
    cout << "Updated array: ";
    for (int i = 0; i < length; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;
}
