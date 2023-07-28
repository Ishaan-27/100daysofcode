#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> getRow(int rowIndex) {
        std::vector<int> row(rowIndex + 1, 1);

        for (int i = 2; i <= rowIndex; i++) {
            for (int j = i - 1; j > 0; j--)
                row[j] += row[j - 1];
        }

        return row;
    }
};

int main() {
    Solution solution;
    int rowIndex;

    std::cout << "Enter the row index (or press Enter for default 4): ";
    std::string input;
    std::getline(std::cin, input);

    if (input.empty()) {
        rowIndex = 4; 
    } else {
        rowIndex = std::stoi(input);
    }

    std::vector<int> row = solution.getRow(rowIndex);

    for (int num : row) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
