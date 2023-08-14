#include <iostream>
#include <string>

int titleToNumber(std::string columnTitle) {
    int result = 0;
    
    for (char c : columnTitle) {
        int digitValue = c - 'A' + 1; // Convert character to corresponding value (A=1, B=2, ..., Z=26)
        result = result * 26 + digitValue; // Build up the column number
    }
    
    return result;
}

int main() {
    std::string columnTitle;
    std::cout << "Enter the column title: ";
    std::cin >> columnTitle;
    
    int columnNumber = titleToNumber(columnTitle);
    
    std::cout << "Column Title: " << columnTitle << "\n";
    std::cout << "Corresponding Column Number: " << columnNumber << "\n";
    
    return 0;
}
