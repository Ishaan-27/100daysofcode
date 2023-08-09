#include <iostream>

class Solution {
public:
    int getSum(int a, int b) {
        if (b == 0)
            return a;

        int sum = a ^ b;
        int carry = (static_cast<unsigned>(a & b)) << 1;

        return getSum(sum, carry);
    }
};

int main() {
    Solution solution;

    int a, b;
    std::cout << "Enter the values of a and b: ";
    std::cin >> a >> b;

    int result = solution.getSum(a, b);
    std::cout << "Sum of " << a << " and " << b << " is: " << result << std::endl;

    return 0;
}
