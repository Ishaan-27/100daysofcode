#include <iostream>

int xorOperation(int n, int start) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= (start + 2 * i);
    }
    return result;
}

int main() {
    int n, start;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    std::cout << "Enter the value of start: ";
    std::cin >> start;

    int xorResult = xorOperation(n, start);
    std::cout << "Bitwise XOR of the elements: " << xorResult << std::endl;

    return 0;
}
