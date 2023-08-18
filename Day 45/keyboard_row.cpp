#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> rows = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
        vector<int> charRow(128, -1);

        for (int i = 0; i < rows.size(); i++) {
            for (char c : rows[i]) {
                charRow[c] = i;
                charRow[toupper(c)] = i;
            }
        }

        vector<string> res;
        for (string word : words) {
            int row = charRow[word[0]];
            bool sameRow = true;
            for (char c : word) {
                if (charRow[c] != row) {
                    sameRow = false;
                    break;
                }
            }
            if (sameRow) res.push_back(word);
        }
        return res;
    }
};

int main() {
    Solution solution;

    vector<string> words = {"hello", "world", "qwe", "keyboard", "row"};
    vector<string> result = solution.findWords(words);

    cout << "Words that can be typed using a single row of the keyboard:" << endl;
    for (const string &word : result) {
        cout << word << " ";
    }

    return 0;
}
