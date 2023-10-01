#include <iostream>

int countDividingDigits(int num) {
    int originalNum = num;
    int count = 0;

    // Handle the case when num is 0 separately
    if (num == 0) {
        return 0;
    }

    // Iterate through each digit of num
    while (num != 0) {
        int digit = num % 10; // Get the last digit
        if (digit != 0 && originalNum % digit == 0) {
            count++;
        }
        num /= 10; // Remove the last digit
    }

    return count;
}

int main() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;

    int result = countDividingDigits(num);

    std::cout << "Number of digits that divide " << num << ": " << result << std::endl;

    return 0;
}
