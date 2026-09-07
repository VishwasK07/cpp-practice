#include <iostream>
using namespace std;

bool isPerfectSquare(int num) {
    if (num < 2)
        return true;

    long long left = 2;
    long long right = num / 2;

    while (left <= right) {
        long long mid = left + (right - left) / 2;

        long long square = mid * mid;

        if (square == num)
            return true;

        else if (square < num)
            left = mid + 1;

        else
            right = mid - 1;
    }

    return false;
}

int main() {
    int num;

    cout << "Enter number: ";
    cin >> num;

    if (isPerfectSquare(num))
        cout << "true";
    else
        cout << "false";

    return 0;
}