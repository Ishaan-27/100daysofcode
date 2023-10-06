#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int calPoints(vector<string>& operations) {
    stack<int> validScores;
    int totalScore = 0;

    for (const string& op : operations) {
        if (op == "+") {
            int lastValidScore = validScores.top();
            validScores.pop();
            int newScore = lastValidScore + validScores.top();
            validScores.push(lastValidScore);
            validScores.push(newScore);
            totalScore += newScore;
        } else if (op == "D") {
            int lastValidScore = validScores.top();
            int newScore = 2 * lastValidScore;
            validScores.push(newScore);
            totalScore += newScore;
        } else if (op == "C") {
            int removedScore = validScores.top();
            validScores.pop();
            totalScore -= removedScore;
        } else {
            int newScore = stoi(op);
            validScores.push(newScore);
            totalScore += newScore;
        }
    }

    return totalScore;
}

int main() {
    vector<string> operations = {"5", "2", "C", "D", "+"};
    int result = calPoints(operations);
    cout << "Total score: " << result << endl;

    return 0;
}
