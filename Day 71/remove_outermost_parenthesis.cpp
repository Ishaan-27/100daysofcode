#include <iostream>
#include <string>

using namespace std;

string removeOuterParentheses(string s) {
    string result = "";
    int balance = 0; // To keep track of the balance of parentheses

    for (char c : s) {
        if (c == '(') {
            if (balance > 0) {
                // Add '(' to the result if it's not the outermost '('
                result += c;
            }
            balance++;
        } else {
            balance--;
            if (balance > 0) {
                // Add ')' to the result if it's not the outermost ')'
                result += c;
            }
        }
    }

    return result;
}

int main() {
    string s = "(()())(())";
    string result = removeOuterParentheses(s);
    cout << result << endl; // Output: "()()()"
    return 0;
}
