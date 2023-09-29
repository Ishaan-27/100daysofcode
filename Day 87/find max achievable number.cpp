#include <iostream>
using namespace std;

class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int ans = 0;
        int xeq = num + t;
        while (t > 0) {
            xeq += 1;
            t--;
        }
        ans = xeq;
        return ans;
    }
};

int main() {
    Solution solution;
    
    int num, t;
    cout << "Enter num: ";
    cin >> num;
    cout << "Enter t: ";
    cin >> t;

    int result = solution.theMaximumAchievableX(num, t);
    cout << "Maximum Achievable Number: " << result << endl;

    return 0;
}
