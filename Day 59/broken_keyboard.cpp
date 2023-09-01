#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<bool> isBroken(26, false); /
        for (char c : brokenLetters) {
            isBroken[c - 'a'] = true; // Mark broken keys as true in the array
        }

        int wordCount = 0; // Initializing the word count to 0
        string word = "";

        for (char c : text) {
            if (c == ' ') {
                // Checking if the current word can be typed
                bool canTypeWord = true;
                for (char w : word) {
                    if (isBroken[w - 'a']) {
                        canTypeWord = false;
                        break;
                    }
                }

                if (canTypeWord) {
                    wordCount++;
                }

                word = ""; 
            } else {
                word += c; 
            }
        }

        bool canTypeWord = true;
        for (char w : word) {
            if (isBroken[w - 'a']) {
                canTypeWord = false;
                break;
            }
        }

        if (canTypeWord) {
            wordCount++;
        }

        return wordCount;
    }
};

int main() {
    Solution solution;
    string text = "hello world";
    string brokenLetters = "ad";
    int result = solution.canBeTypedWords(text, brokenLetters);
    cout << "Number of words that can be fully typed: " << result << endl;

    return 0;
}
