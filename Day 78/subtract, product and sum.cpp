#include <iostream>

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        int digit;

        while (n > 0) {
            digit = n % 10;    // Extract the last digit
            product *= digit;  // Update the product with the digit
            sum += digit;      // Update the sum with the digit
            n /= 10;           // Remove the last digit from n
        }

        int difference = product - sum;
        return difference;
    }
};

int main() {
    Solution solution;
    int n;
    
    std::cout << "Enter an integer number: ";
    std::cin >> n;

    int result = solution.subtractProductAndSum(n);

    std::cout << "The difference between the product and sum of digits is: " << result << std::endl;

    return 0;
}
