#include <iostream>

int Fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}

int main() {
    int n;
    
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    
    if (n < 0) {
        std::cout << "Invalid input. Please enter a non-negative integer." << std::endl;
        return 1; // Exit with an error code
    }
    
    int result = Fibonacci(n);
    
    std::cout << "F(" << n << ") = " << result << std::endl;
    
    return 0;
}
