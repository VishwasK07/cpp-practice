#include <bits/stdc++.h>
using namespace std;

vector<int> findPeakGrid(vector<vector<int>>& mat) {
    int rows = mat.size();
    int cols = mat[0].size();

    int low = 0;
    int high = cols - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Find maximum element in middle column
        int maxRow = 0;

        for (int i = 1; i < rows; i++) {
            if (mat[i][mid] > mat[maxRow][mid]) {
                maxRow = i;
            }
        }

        int left = (mid > 0) ? mat[maxRow][mid - 1] : -1;
        int right = (mid < cols - 1) ? mat[maxRow][mid + 1] : -1;

        // Peak found
        if (mat[maxRow][mid] > left &&
            mat[maxRow][mid] > right) {
            return {maxRow, mid};
        }

        if (left > mat[maxRow][mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    return {-1, -1};
}

int main() {

    // 3 × 3 built-in input
    vector<vector<int>> mat = {
        {1, 4, 3},
        {2, 5, 6},
        {7, 8, 9}
    };

    vector<int> ans = findPeakGrid(mat);

    cout << "[" << ans[0] << ", " << ans[1] << "]";

    return 0;
}