#include <iostream>

bool isSameAfterReversals(int num) {
    int original = num;
    int reversed1 = 0;

    // Reverse the first time
    while (num != 0) {
        int digit = num % 10;
        reversed1 = reversed1 * 10 + digit;
        num /= 10;
    }

    int reversed2 = 0;

    // Reverse the second time
    while (reversed1 != 0) {
        int digit = reversed1 % 10;
        reversed2 = reversed2 * 10 + digit;
        reversed1 /= 10;
    }

    return reversed2 == original;
}

int main() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;

    if (isPalindrome(num)) {
        std::cout << "true: Reversed2 equals the original number." << std::endl;
    } else {
        std::cout << "false: Reversed2 does not equal the original number." << std::endl;
    }

    return 0;
}
