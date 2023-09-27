#include <iostream>
#include <vector>

class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for (int num = low; num <= high; num++) {
            if (isSymmetric(num)) {
                count++;
            }
        }
        return count;
    }

private:
    bool isSymmetric(int num) {
        std::vector<int> digits;

        // Extract the digits of num and store them in a vector
        while (num > 0) {
            digits.push_back(num % 10);
            num /= 10;
        }

        int n = digits.size();

        // Numbers with an odd number of digits are not symmetric
        if (n % 2 != 0) {
            return false;
        }

        int leftSum = 0;
        int rightSum = 0;

        // Calculate the sum of the first half and the second half of the digits
        for (int i = 0; i < n / 2; ++i) {
            leftSum += digits[i];
            rightSum += digits[n - i - 1];
        }

        // Check if the sums are equal
        return leftSum == rightSum;
    }
};

int main() {
    int low, high;
    std::cout << "Enter the low and high values: ";
    std::cin >> low >> high;

    Solution solution;
    int result = solution.countSymmetricIntegers(low, high);

    std::cout << "The number of symmetric integers in the range [" << low << ", " << high << "] is: " << result << std::endl;

    return 0;
}
