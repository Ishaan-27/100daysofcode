#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    bool isVowel(char ch) {
        return (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' ||
            ch == 'O' || ch == 'u' || ch == 'U');
    }

    static bool comp(char &a, char &b) {
        return b > a;
    }

    std::string sortVowels(std::string s) {
        int n = s.size();
        std::string t(n, '@');
        std::vector<char> arr;
        for (int i = 0; i < n; i++) {
            if (isVowel(s[i]) == 0)
                t[i] = s[i];
            else
                arr.push_back(s[i]);
        }
        std::sort(arr.begin(), arr.end(), comp);
        int x = 0;
        for (int i = 0; i < n; i++) {
            if (t[i] == '@')
                t[i] = arr[x++];
        }
        return t;
    }
};

int main() {
    Solution solution;
    std::cout << "Enter a string: ";
    std::string input;
    std::getline(std::cin, input);

    std::string result = solution.sortVowels(input);
    std::cout << "Sorted vowels: " << result << std::endl;
    return 0;
}
