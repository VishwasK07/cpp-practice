#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of matrix: ";
    cin >> n;

    int arr[100][100];

    cout << "Enter matrix elements:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int sum = 0;

    for(int i = 0; i < n; i++) {
        // Primary diagonal
        sum += arr[i][i];

        // Secondary diagonal
        if(i != n - 1 - i) {
            sum += arr[i][n - 1 - i];
        }
    }

    cout << "Diagonal Sum = " << sum;

    return 0;
}