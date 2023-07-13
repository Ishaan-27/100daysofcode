#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stk.push(c);
            } else {
                if (stk.empty()) {
                    return false;
                }
                if (c == ')' && stk.top() == '(') {
                    stk.pop();
                } else if (c == '}' && stk.top() == '{') {
                    stk.pop();
                } else if (c == ']' && stk.top() == '[') {
                    stk.pop();
                } else {
                    return false;
                }
            }
        }
        return stk.empty();
    }
};

int main() {
    Solution solution;
    string input;
    cout << "Enter a string: ";
    cin >> input;
    bool result = solution.isValid(input);
    if (result) {
        cout << "The string has balanced parentheses, curly brackets, and square brackets." << endl;
    } else {
        cout << "The string does not have balanced parentheses, curly brackets, and square brackets." << endl;
    }
    return 0;
}
