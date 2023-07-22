#include <iostream>
#include <cctype> // For isalnum() and tolower() functions
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;
        while (start <= end) {
            if (!isalnum(s[start])) {
                start++;
                continue;
            }
            if (!isalnum(s[end])) {
                end--;
                continue;
            }
            if (tolower(s[start]) != tolower(s[end])) {
                return false;
            } else {
                start++;
                end--;
            }
        }
        return true;
    }
};

int main() {
    Solution solution;
    string input = "A man, a plan, a canal: Panama";
    bool result = solution.isPalindrome(input);
    cout << "Is it a palindrome? " << (result ? "Yes" : "No") << endl;
    return 0;
}
