#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isvowel(char x) {
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
            return true;
        return false;
    }

    string reverseVowels(string s) {

        int start = 0;
        int end = s.length() - 1;

        while (start < end) {
            if (isvowel(s[start]) && isvowel(s[end])) {
                swap(s[start], s[end]);
                start++;
                end--;
            } else if (isvowel(s[start])) {
                end--;
            } else {
                start++;
            }
        }
        return s;
    }
};

int main() {
    Solution solution;

    string input;
    cout << "Enter a string: ";
    cin >> input;

    string reversed = solution.reverseVowels(input);
    cout << "String with reversed vowels: " << reversed << endl;

    return 0;
}
