#include <iostream>
#include <vector>
#include <string>

using namespace std;

string charToMorse(char c) {
    vector<string> morseCodes = {
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..",
        "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-",
        "-.--", "--.."
    };
    return morseCodes[c - 'a'];
}

int uniqueMorseRepresentations(vector<string>& words) {
    vector<string> transformations;

    for (string word : words) {
        string transformation = "";
        for (char c : word) {
            transformation += charToMorse(c);
        }
        bool found = false;
        for (string existing : transformations) {
            if (existing == transformation) {
                found = true;
                break;
            }
        }
        if (!found) {
            transformations.push_back(transformation);
        }
    }

    return transformations.size();
}

int main() {
    vector<string> words = {"gin", "zen", "gig", "msg"};
    int result = uniqueMorseRepresentations(words);
    cout << "Number of different transformations: " << result << endl;

    return 0;
}
