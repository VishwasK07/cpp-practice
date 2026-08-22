#include <iostream>
#include <vector>
using namespace std;

bool searchRow(vector<int>& mat, int target) {
    int st = 0;
    int end = mat.size() - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (target == mat[mid]) {
            return true;
        }
        else if (target > mat[mid]) {
            st = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return false;
}

bool searchMatrix(vector<vector<int>>& mat, int target) {
    int m = mat.size();
    int n = mat[0].size();

    int startRow = 0;
    int endRow = m - 1;

    while (startRow <= endRow) {
        int midRow = startRow + (endRow - startRow) / 2;

        if (target >= mat[midRow][0] &&
            target <= mat[midRow][n - 1]) {

            return searchRow(mat[midRow], target);
        }
        else if (target > mat[midRow][n - 1]) {
            startRow = midRow + 1;
        }
        else {
            endRow = midRow - 1;
        }
    }

    return false;
}

int main() {
    int m, n;

    cout << "Enter rows and columns: ";
    cin >> m >> n;

    vector<vector<int>> mat(m, vector<int>(n));

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    if (searchMatrix(mat, target)) {
        cout << "Target found";
    }
    else {
        cout << "Target not found";
    }

    return 0;
}