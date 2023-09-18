#include <iostream>
using namespace std;
class Solution {
public:
    int sumBase(int n, int k) {
        int sum = 0;
        
        while (n > 0) {
            sum += n % k;
            n /= k;
        }
        
        return sum;
    }
};

int main() {
    Solution solution;
    
    int n, k;
    std::cout << "Enter an integer (in base 10): ";
    std::cin >> n;
    
    std::cout << "Enter the base (k): ";
    std::cin >> k;
    
    if (n < 0 || k < 2) {
        std::cout << "Invalid input. The integer must be non-negative, and base (k) must be at least 2." << std::endl;
        return 1;
    }
    
    int result = solution.sumBase(n, k);
    
    std::cout << "Sum of digits in base " << k << ": " << result << std::endl;
    
    return 0;
}
