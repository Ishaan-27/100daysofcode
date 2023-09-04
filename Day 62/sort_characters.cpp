#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for (int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }

        s = "";
        vector<pair<char, int>> vec(mp.begin(), mp.end());

        sort(vec.begin(), vec.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second > b.second;
        });

        for (auto i : vec) {
            if (i.second > 1) {
                int count = 0;
                while (count < i.second) {
                    s += i.first;
                    count++;
                }
            } else {
                s += i.first;
            }
        }

        return s;
    }
};

int main() {
    Solution solution;
    string s = "tree"; // Input string
    string sortedStr = solution.frequencySort(s); // Call the frequencySort function from the Solution class
    cout << "Sorted String: " << sortedStr << endl; // Print the sorted string

    return 0;
}
