#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    std::vector<std::string> commonChars(std::vector<std::string>& words) {
        std::vector<int> freq1(26, 0), freq2(26, 0);

        for (char ch : words[0]) {
            freq1[ch - 'a']++;
        }

        int n = words.size();
        for (int i = 1; i < n; i++) {
            for (char ch : words[i]) {
                freq2[ch - 'a']++;
            }

            for (int j = 0; j < 26; j++) {
                freq1[j] = std::min(freq1[j], freq2[j]);
                freq2[j] = 0;
            }
        }

        std::vector<std::string> ans;
        for (int i = 0; i < 26; i++) {
            if (freq1[i] > 0) {
                char ch = i + 'a';
                std::string s(1, ch);
                int count = freq1[i];
                while (count-- > 0) {
                    ans.push_back(s);
                }
            }
        }

        return ans;
    }
};

int main() {
    Solution solution;
    
    int n;
    std::cout << "Enter the number of words: ";
    std::cin >> n;

    std::vector<std::string> words(n);
    std::cout << "Enter " << n << " words:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> words[i];
    }

    std::vector<std::string> result = solution.commonChars(words);

    std::cout << "Common characters: ";
    for (const std::string& s : result) {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    return 0;
}
