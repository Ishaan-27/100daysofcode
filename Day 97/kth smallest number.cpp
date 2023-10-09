#include <iostream>
#include <algorithm> // Include for min function

class Solution {
public:
    int count(int m, int n, int x) {
        int ans = 0;
        for(int i = 1; i <= m; i++) 
            ans += std::min(x / i, n); // Use std::min
        return ans;
    }
    
    int findKthNumber(int m, int n, int k) {
        int L = 1, R = m * n, mid, ans = 0; // Initialize ans to 0
        while (L <= R) {
            mid = (L + R) >> 1;
            if (count(m, n, mid) < k) 
                L = mid + 1;
            else
                R = mid - 1, ans = mid;
        }
        return ans;
    }
};

int main() {
    Solution solution;
    int m = 3, n = 3, k = 5;
    int result = solution.findKthNumber(m, n, k);
    std::cout << "The " << k << "-th smallest number in the " << m << "x" << n << " multiplication table is: " << result << std::endl;
    return 0;
}
