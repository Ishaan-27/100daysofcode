#include <iostream>

class Solution {
public:
    int sumOfMultiples(int n) {
        int sum = 0;
        for (int i = 1; i <= n; i++){
            if ((i % 3 == 0) || (i % 5 == 0) || (i % 7 == 0)){
                sum += i;
            }
        }
        return sum;
    }
};

int main() {
    int n;
    std::cout << "Enter a positive integer n: ";
    std::cin >> n;

    Solution solution;
    int result = solution.sumOfMultiples(n);

    std::cout << "The sum of integers divisible by 3, 5, or 7 in the range [1, " << n << "] is: " << result << std::endl;

    return 0;
}
