#include <iostream>
using namespace std;

// Function to take input
void inputArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Taking input for index: " << i << endl;
        cin >> arr[i];
    }
}

// Function to print array
void printArray(int arr[], int n)
{
    cout << "Printing array:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int arr[10];
    int n;

    cout << "Enter the value of n: " << endl;
    cin >> n;

    // Function calls
    inputArray(arr, n);
    printArray(arr, n);

    return 0;
}