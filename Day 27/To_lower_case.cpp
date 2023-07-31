#include <iostream>
#include <string>

class Solution {
public:
    std::string toLowerCase(std::string s) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] - 'A' + 'a';
            }
        }
        return s;
    }
};

int main() {
    Solution solution;
    std::string input = "Hello World!";
    std::string result = solution.toLowerCase(input);
    std::cout << "Original: " << input << std::endl;
    std::cout << "Lowercased: " << result << std::endl;
    return 0;
}
