#include <iostream>
#include <string>

std::string reverseWords(const std::string& s) {
    std::string result = "";
    std::string word = "";
    
    for (char c : s) {
        if (c != ' ') {
            word += c;
        } else {
            std::reverse(word.begin(), word.end());
            result += word + ' ';
            word = "";
        }
    }
    
    std::reverse(word.begin(), word.end());
    result += word;
    
    return result;
}

int main() {
    std::string input = "Let's reverse the words in this sentence";
    
    std::string reversed = reverseWords(input);
    
    std::cout << "Original: " << input << std::endl;
    std::cout << "Reversed: " << reversed << std::endl;
    
    return 0;
}
