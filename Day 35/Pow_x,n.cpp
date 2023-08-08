#include <iostream>

class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) {
            return 1.0;
        }
        
        double temp = myPow(x, n / 2);
        
        if (n % 2 == 0) {
            return temp * temp;
        } else {
            if (n > 0) {
                return x * temp * temp;
            } else {
                return (temp * temp) / x;
            }
        }
    }
};

int main() {
    Solution solution;

    double x;
    int n;
    
    std::cout << "Enter the value of x: ";
    std::cin >> x;
    
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    
    double result = solution.myPow(x, n);
    
    std::cout << x << " raised to the power " << n << " is: " << result << std::endl;
    
    return 0;
}
