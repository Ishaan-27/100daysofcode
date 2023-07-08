#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i] += 1;
                return digits;
            } else {
                digits[i] = 0;
            }
        }
        digits[0] = 1;
        digits.push_back(0);
        return digits;
    }
};

int main() {
    Solution solution;
    vector<int> digits = {1, 2, 5}; // Example input
    vector<int> result = solution.plusOne(digits);
    
    // Print the result
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}
