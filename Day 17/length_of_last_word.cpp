#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<char> v;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == ' ')
                continue;
            else if (s[i] != ' ') {
                v.push_back(s[i]);
                if (s.length() > 1 && i != 0) {
                    if (s[i - 1] == ' ')
                        return v.size();
                }
            }
        }
        return v.size();
    }
};

int main() {
    Solution solution;
    string input = "Hello World";
    int length = solution.lengthOfLastWord(input);
    cout << "Length of the last word: " << length << endl;
    return 0;
}
