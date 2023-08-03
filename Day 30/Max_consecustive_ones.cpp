#include <iostream>
#include <vector>

class Solution {
public:
    int findMaxConsecutiveOnes(std::vector<int>& nums) {
        int i, count=0, max=0;
        for(i=0 ; i<nums.size() ; i++)
        {
            if(nums[i]==1)
            {
                count++;
                if(count>max)
                {
                    max = count;
                }
            }
            else
            {
                count=0;
            }
        }
        return max;
    }
};

int main() {
    int n;
    std::cout << "Enter the size of the binary array: ";
    std::cin >> n;

    std::vector<int> nums;
    std::cout << "Enter the elements of the binary array (0 or 1): ";
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        nums.push_back(num);
    }

    // Create an instance of the Solution class
    Solution solution;

    int result = solution.findMaxConsecutiveOnes(nums);
    std::cout << "Maximum number of consecutive 1's: " << result << std::endl;

    return 0;
}
