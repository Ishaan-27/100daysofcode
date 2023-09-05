#include <iostream>
#include <vector>

class Solution {
public:
    bool checkDivisibility(int num) {
        int x = num;
        while (num != 0) {
            int r = num % 10;
            if (r == 0 || x % r != 0) {
                return false;
            }
            num /= 10;
        }
        return true;
    }

    std::vector<int> selfDividingNumbers(int left, int right) {
        std::vector<int> res;
        for (int i = left; i <= right; ++i) {
            if (i < 10 || checkDivisibility(i)) {
                res.push_back(i);
            }
        }
        return res;
    }
};

int main() {
    Solution solution;
    int left = 1;
    int right = 100;
    std::vector<int> result = solution.selfDividingNumbers(left, right);

    // Print the self-dividing numbers
    std::cout << "Self-dividing numbers in the range [" << left << ", " << right << "]: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
