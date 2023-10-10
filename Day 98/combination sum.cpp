#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> currentCombination;

        // Start the backtracking process
        backtrack(candidates, target, 0, currentCombination, result);

        return result;
    }

    void backtrack(vector<int>& candidates, int target, int start, vector<int>& currentCombination, vector<vector<int>>& result) {
        if (target == 0) {
            // If target becomes 0, we found a valid combination
            result.push_back(currentCombination);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {
            if (candidates[i] <= target) {
                // Include the current candidate in the combination
                currentCombination.push_back(candidates[i]);

                // Recursively explore the remaining possibilities
                backtrack(candidates, target - candidates[i], i, currentCombination, result);

                // Remove the last added candidate to backtrack
                currentCombination.pop_back();
            }
        }
    }
};

int main() {
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;

    Solution solution;
    vector<vector<int>> combinations = solution.combinationSum(candidates, target);

    cout << "Unique combinations that sum to " << target << ":" << endl;
    for (const vector<int>& combination : combinations) {
        cout << "[ ";
        for (int num : combination) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
