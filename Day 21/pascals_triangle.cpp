#include <iostream>
#include <vector>

class Solution {
public:
    long long int ncr(int n, int r) {
        long long int ans = 1;
        for (int col = 0; col < r; col++) {
            ans = ans * (n - col);
            ans = ans / (col + 1);
        }
        return ans;
    }

    std::vector<std::vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> res;

        for (int i = 0; i < numRows; i++) {
            std::vector<int> temp;
            for (int j = 0; j <= i; j++) {
                temp.push_back(ncr(i, j));
            }
            res.push_back(temp);
        }
        return res;
    }
};

int main() {
    Solution solution;
    int numRows = 5; // Change this value to generate a different number of rows

    std::vector<std::vector<int>> pascalsTriangle = solution.generate(numRows);

    // Display the generated Pascal's Triangle
    for (const std::vector<int>& row : pascalsTriangle) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
