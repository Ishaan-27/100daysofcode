#include <iostream>

int addTwoIntegers(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int num1, num2;

    // Input the two integers
    std::cout << "Enter the first integer: ";
    std::cin >> num1;
    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    // Calculate and display the sum
    int sum = addTwoIntegers(num1, num2);
    std::cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

    return 0;
}
