#include <iostream>
#include <vector>
#include <string>

bool isConsistent(std::string allowed, std::string word) {
    for (char c : word) {
        bool found = false;
        for (char a : allowed) {
            if (c == a) {
                found = true;
                break;
            }
        }
        if (!found) {
            return false;
        }
    }
    return true;
}

int countConsistentStrings(std::string allowed, std::vector<std::string>& words) {
    int consistentCount = 0;

    for (const std::string& word : words) {
        if (isConsistent(allowed, word)) {
            consistentCount++;
        }
    }

    return consistentCount;
}

int main() {
    std::string allowed = "abc";
    std::vector<std::string> words = {"a", "b", "c", "ab", "ac", "bc", "def"};
    
    int result = countConsistentStrings(allowed, words);
    std::cout << "Number of consistent strings: " << result << std::endl;

    return 0;
}
