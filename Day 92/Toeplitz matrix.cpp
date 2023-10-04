#include <iostream>
#include <vector>

using namespace std;

bool isToeplitzMatrix(vector<vector<int>>& matrix) {
    int m = matrix.size(); // Number of rows
    int n = matrix[0].size(); // Number of columns

    // Check each element against its top-left neighbor
    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            if (matrix[i][j] != matrix[i - 1][j - 1]) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 1, 2},
        {7, 4, 1}
    };

    bool result = isToeplitzMatrix(matrix);

    if (result) {
        cout << "The matrix is Toeplitz." << endl;
    } else {
        cout << "The matrix is not Toeplitz." << endl;
    }

    return 0;
}
