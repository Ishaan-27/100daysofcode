#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.size();
        int m = haystack.size();

        if (n == 0)
            return 0;

        if (m < n)
            return -1;

        for (int i = 0; i <= (m - n); i++) {
            bool isMatch = true;
            int index = i;

            for (int j = 0; j < n; j++) {
                if (needle[j] != haystack[j + i]) {
                    isMatch = false;
                    break;
                }
            }

            if (isMatch)
                return index;
        }

        return -1;
    }
};

int main() {
    Solution solution;
    string haystack = "Hello, world!";
    string needle = "world";
    int index = solution.strStr(haystack, needle);
    cout << "Index: " << index << endl;

    return 0;
}
