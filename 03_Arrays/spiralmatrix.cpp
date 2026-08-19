#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralPrint(vector<vector<int>>& matrix) {
    int n = matrix.size();        // rows
    int m = matrix[0].size();     // columns

    int startingRow = 0;
    int endingRow = n - 1;
    int startingCol = 0;
    int endingCol = m - 1;

    vector<int> ans;

    while (startingRow <= endingRow && startingCol <= endingCol) {

        // 1. Left to Right
        for (int col = startingCol; col <= endingCol; col++) {
            ans.push_back(matrix[startingRow][col]);
        }
        startingRow++;

        // 2. Top to Bottom
        for (int row = startingRow; row <= endingRow; row++) {
            ans.push_back(matrix[row][endingCol]);
        }
        endingCol--;

        // 3. Right to Left
        if (startingRow <= endingRow) {
            for (int col = endingCol; col >= startingCol; col--) {
                ans.push_back(matrix[endingRow][col]);
            }
            endingRow--;
        }

        // 4. Bottom to Top
        if (startingCol <= endingCol) {
            for (int row = endingRow; row >= startingRow; row--) {
                ans.push_back(matrix[row][startingCol]);
            }
            startingCol++;
        }
    }

    return ans;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<int> result = spiralPrint(matrix);

    cout << "Spiral Order: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}