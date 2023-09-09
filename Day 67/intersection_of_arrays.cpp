#include <iostream>
#include <vector>

std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
    std::vector<int> result;

    for (int i = 0; i < nums1.size(); i++) {
        for (int j = 0; j < nums2.size(); j++) {
            if (nums1[i] == nums2[j]) {
                // Check if the element is not already in the result
                bool alreadyExists = false;
                for (int k = 0; k < result.size(); k++) {
                    if (result[k] == nums1[i]) {
                        alreadyExists = true;
                        break;
                    }
                }
                if (!alreadyExists) {
                    result.push_back(nums1[i]);
                }
                break; // Break the inner loop once a match is found
            }
        }
    }

    return result;
}

int main() {
    std::vector<int> nums1 = {1, 2, 2, 1};
    std::vector<int> nums2 = {2, 2};
    
    std::vector<int> result = intersection(nums1, nums2);

    std::cout << "Intersection: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
