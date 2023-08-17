#include <iostream>
#include <algorithm>

class Solution {
public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
        std::sort(ransomNote.begin(), ransomNote.end());
        std::sort(magazine.begin(), magazine.end());
        int i = 0, j = 0;
        while (i < ransomNote.length() && j < magazine.size()) {
            if (ransomNote[i] == magazine[j]) {
                i++;
                j++;
            } else if (ransomNote[i] > magazine[j]) {
                j++;
            } else {
                return false;
            }
        }
        return i == ransomNote.size();
    }
};

int main() {
    Solution solution;

    std::string ransomNote, magazine;
    std::cout << "Enter the ransom note: ";
    std::cin >> ransomNote;
    std::cout << "Enter the magazine: ";
    std::cin >> magazine;

    if (solution.canConstruct(ransomNote, magazine)) {
        std::cout << "Ransom note can be constructed." << std::endl;
    } else {
        std::cout << "Ransom note cannot be constructed." << std::endl;
    }

    return 0;
}
