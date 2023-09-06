#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
    vector<string> result;
    
    for (string word : words) {
        if (word.length() != pattern.length()) {
            continue; // Skip words with different lengths
        }
        
        unordered_map<char, char> mapping;
        unordered_map<char, char> reverseMapping;
        bool isMatch = true;
        
        for (int i = 0; i < word.length(); ++i) {
            char w = word[i];
            char p = pattern[i];
            
            if (mapping.find(w) == mapping.end() && reverseMapping.find(p) == reverseMapping.end()) {
                mapping[w] = p;
                reverseMapping[p] = w;
            } else if (mapping[w] != p || reverseMapping[p] != w) {
                isMatch = false;
                break;
            }
        }
        
        if (isMatch) {
            result.push_back(word);
        }
    }
    
    return result;
}

int main() {
    vector<string> words = {"abc", "deq", "mee", "aqq", "dkd", "ccc"};
    string pattern = "abb";
    
    vector<string> matchedWords = findAndReplacePattern(words, pattern);
    
    cout << "Words that match pattern '" << pattern << "': ";
    for (string word : matchedWords) {
        cout << word << " ";
    }
    cout << endl;
    
    return 0;
}
