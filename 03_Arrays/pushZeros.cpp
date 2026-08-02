#include <iostream>
using namespace std;

void pushZeros(int arr[], int n) {
    int j = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    pushZeros(arr, n);

    cout << "Array after pushing zeros to the end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
