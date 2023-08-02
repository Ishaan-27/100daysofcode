#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> t(n + 1);
        t[0] = 0;
        for (int i = 1; i <= n; ++i)
            t[i] = t[i / 2] + i % 2;
        return t;
    }
};

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    Solution solution;
    vector<int> result = solution.countBits(n);

    cout << "The array containing the count of 1's in binary representation of i is: ";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
