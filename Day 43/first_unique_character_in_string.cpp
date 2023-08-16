#include <iostream>
#include <string>
#include <unordered_map>

class Solution {
public:
    int firstUniqChar(std::string s) {
        std::unordered_map<char, int> mp;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
        }

        for (int i = 0; i < n; i++) {
            char key = s[i];
            auto temp = mp.find(key);
            if (temp->second == 1) {
                return i;
            }
        }

        return -1;
    }
};

int main() {
    Solution solution;
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    int index = solution.firstUniqChar(input);
    if (index != -1) {
        std::cout << "The index of the first non-repeating character is: " << index << std::endl;
    } else {
        std::cout << "No non-repeating character found." << std::endl;
    }

    return 0;
}
