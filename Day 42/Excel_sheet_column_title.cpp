#include <iostream>
#include <string>

std::string convertToTitle(int columnNumber) {
    std::string result = "";
    
    while (columnNumber > 0) {
        int remainder = (columnNumber - 1) % 26;  // Get the remainder for the current column
        result = char('A' + remainder) + result;  // Convert to corresponding character and append
        
        columnNumber = (columnNumber - 1) / 26;  // Move to the next column
    }
    
    return result;
}

int main() {
    int columnNumber;
    std::cout << "Enter the column number: ";
    std::cin >> columnNumber;
    
    std::string columnTitle = convertToTitle(columnNumber);
    std::cout << "Excel Column Title: " << columnTitle << std::endl;
    
    return 0;
}
