#include <iostream>

class Solution {
public:
    int smallestEvenMultiple(int n) {
        // Lambda function to calculate the GCD of two numbers using Euclidean algorithm
        auto gcd = [](int a, int b) {
            while (b != 0) {
                int temp = b;
                b = a % b;
                a = temp;
            }
            return a;
        };

        // Lambda function to calculate the LCM of two numbers
        auto lcm = [gcd](int a, int b) {
            return (a * b) / gcd(a, b);
        };

        // Calculate the LCM of 2 and n to get the smallest even multiple
        return lcm(2, n);
    }
};

int main() {
    Solution solution;
    int n;
    std::cout << "Enter a positive integer n: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
    } else {
        int result = solution.smallestEvenMultiple(n);
        std::cout << "The smallest positive multiple of both 2 and " << n << " is: " << result << std::endl;
    }

    return 0;
}
