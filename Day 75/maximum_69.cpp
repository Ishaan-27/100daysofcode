#include <iostream>
#include <string>

using namespace std;

int maximum69Number(int num) {
    // Convert the number to a string for easy manipulation
    string numStr = to_string(num);
    
    // Find the first occurrence of '6' in the string
    size_t pos = numStr.find('6');
    
    // If '6' is found, change it to '9' to maximize the number
    if (pos != string::npos) {
        numStr[pos] = '9';
    }
    
    // Convert the modified string back to an integer and return it
    return stoi(numStr);
}

int main() {
    int num;
    cout << "Enter a positive integer consisting of only digits 6 and 9: ";
    cin >> num;
    
    int result = maximum69Number(num);
    cout << "The maximum number you can get by changing at most one digit is: " << result << endl;
    
    return 0;
}
