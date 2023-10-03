#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arrayPairSum(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end()); // Sort the array in ascending order
    int sum = 0;
    
    // Pair adjacent elements starting from the first element (0-based indexing)
    for (int i = 0; i < n; i += 2) {
        sum += nums[i]; // Add the smaller number in each pair
    }
    
    return sum;
}

int main() {
    vector<int> nums = {1, 4, 3, 2};
    int maxSum = arrayPairSum(nums);
    cout << "Maximized sum: " << maxSum << endl;
    return 0;
}
