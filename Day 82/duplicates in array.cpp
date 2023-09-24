#include <iostream>
#include <vector>

using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
    vector<int> duplicates;

    for (int i = 0; i < nums.size(); ++i) {
        while (nums[i] != i + 1) {
            if (nums[i] == nums[nums[i] - 1]) {
                if (find(duplicates.begin(), duplicates.end(), nums[i]) == duplicates.end()) {
                    duplicates.push_back(nums[i]);
                }
                break;
            }
            swap(nums[i], nums[nums[i] - 1]);
        }
    }

    return duplicates;
}

int main() {
    vector<int> nums = {4, 3, 2, 7, 8, 2, 1, 5};
    vector<int> duplicates = findDuplicates(nums);

    cout << "Duplicate numbers are: ";
    for (int num : duplicates) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
