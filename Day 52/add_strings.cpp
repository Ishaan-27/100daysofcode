#include <iostream>
#include <string>
#include <algorithm>

std::string addStrings(std::string num1, std::string num2) {
    std::string result;
    int carry = 0;
    int i = num1.size() - 1;
    int j = num2.size() - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        int remainder = sum % 10;

        result += std::to_string(remainder);

        if (i >= 0) i--;
        if (j >= 0) j--;
    }

    std::reverse(result.begin(), result.end());
    return result;
}

int main() {
    std::string num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::string sum = addStrings(num1, num2);

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
