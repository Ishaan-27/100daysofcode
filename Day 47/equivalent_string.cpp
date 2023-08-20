#include <iostream>
#include <vector>
#include <string>

bool arrayStringsAreEqual(std::vector<std::string>& word1, std::vector<std::string>& word2) {
    std::string str1, str2;

    for (const std::string& s : word1) {
        str1 += s;
    }

    for (const std::string& s : word2) {
        str2 += s;
    }

    return str1 == str2;
}

int main() {
    int n1, n2;
    std::cout << "Enter the number of strings in word1: ";
    std::cin >> n1;

    std::cout << "Enter the strings for word1:" << std::endl;
    std::vector<std::string> word1(n1);
    for (int i = 0; i < n1; ++i) {
        std::cin >> word1[i];
    }

    std::cout << "Enter the number of strings in word2: ";
    std::cin >> n2;

    std::cout << "Enter the strings for word2:" << std::endl;
    std::vector<std::string> word2(n2);
    for (int i = 0; i < n2; ++i) {
        std::cin >> word2[i];
    }

    bool result = arrayStringsAreEqual(word1, word2);

    if (result) {
        std::cout << "The arrays represent the same string." << std::endl;
    } else {
        std::cout << "The arrays do not represent the same string." << std::endl;
    }

    return 0;
}
