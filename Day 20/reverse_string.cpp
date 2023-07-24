#include <vector>

class Solution {
public:
    void reverseString(std::vector<char>& s) {
        int left = 0, right = s.size() - 1;
        while (left < right) {
            std::swap(s[left++], s[right--]);
        }
    }
};

#include <iostream> // For testing purposes only

int main() {
    Solution sol;
    std::vector<char> input{'h', 'e', 'l', 'l', 'o'};
    
    std::cout << "Original string: ";
    for (char ch : input) {
        std::cout << ch;
    }
    std::cout << std::endl;
    
    sol.reverseString(input);
    
    std::cout << "Reversed string: ";
    for (char ch : input) {
        std::cout << ch;
    }
    std::cout << std::endl;

    return 0;
}
