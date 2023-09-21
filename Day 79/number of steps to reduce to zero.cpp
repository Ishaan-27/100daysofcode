#include <iostream>

int numberOfSteps(int num) {
    int steps = 0;
    while (num > 0) {
        if (num % 2 == 0) {
            num /= 2; // Divide by 2 if even
        } else {
            num -= 1; // Subtract 1 if odd
        }
        steps++;
    }
    return steps;
}

int main() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;
    int steps = numberOfSteps(num);
    std::cout << "Number of steps to reduce it to zero: " << steps << std::endl;
    return 0;
}
