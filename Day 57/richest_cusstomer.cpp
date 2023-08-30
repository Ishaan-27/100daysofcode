#include <iostream>
#include <vector>

using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    int maxWealth = 0;
    for (const vector<int>& customerAccounts : accounts) {
        int wealth = 0;
        for (int amount : customerAccounts) {
            wealth += amount;
        }
        maxWealth = max(maxWealth, wealth);
    }
    return maxWealth;
}

int main() {
    int m, n;
    cout << "Enter the number of customers (m): ";
    cin >> m;
    cout << "Enter the number of banks (n): ";
    cin >> n;

    vector<vector<int>> accounts(m, vector<int>(n));

    cout << "Enter the account balances:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> accounts[i][j];
        }
    }

    int richestCustomerWealth = maximumWealth(accounts);
    cout << "The wealth of the richest customer is: " << richestCustomerWealth << endl;

    return 0;
}
