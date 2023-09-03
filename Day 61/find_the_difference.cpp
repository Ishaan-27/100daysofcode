#include <iostream>

char findAddedLetter(std::string s, std::string t) {
    int charCount[26] = {0}; 

    for (char c : s) {
        charCount[c - 'a']++;
    }

    for (char c : t) {
        charCount[c - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (charCount[i] == -1) {
            return static_cast<char>('a' + i);
        }
    }

    return '\0'; 
}

int main() {
    std::string s, t;
    std::cout << "Enter string s: ";
    std::cin >> s;
    std::cout << "Enter string t: ";
    std::cin >> t;

    char addedLetter = findAddedLetter(s, t);
    if (addedLetter != '\0') {
        std::cout << "The added letter is: " << addedLetter << std::endl;
    } else {
        std::cout << "No letter was added." << std::endl;
    }

    return 0;
}
