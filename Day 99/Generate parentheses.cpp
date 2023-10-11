#include <vector>
#include <string>

class Solution {
public:
    std::vector<std::string> generateParenthesis(int n) {
        std::vector<std::string> result;
        generateParenthesisHelper(result, 0, 0, n, "");
        return result;
    }

    void generateParenthesisHelper(std::vector<std::string>& result, int leftCount, int rightCount, int n, std::string current) {
        if (leftCount == n && rightCount == n) {
            result.push_back(current);
            return;
        }

        if (leftCount < n) {
            generateParenthesisHelper(result, leftCount + 1, rightCount, n, current + "(");
        }

        if (rightCount < leftCount) {
            generateParenthesisHelper(result, leftCount, rightCount + 1, n, current + ")");
        }
    }
};
