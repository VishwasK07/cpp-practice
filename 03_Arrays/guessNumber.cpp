#include <iostream>
using namespace std;

// Hidden number
int secret = 6;

// Our own guess function
int guess(int num) {

    if (num == secret) {
        return 0;
    }
    else if (num > secret) {
        return -1;
    }
    else {
        return 1;
    }
}

int guessNumber(int n) {

    int low = 1;
    int high = n;

    while (low <= high) {

        int mid = low + (high - low) / 2;

        int result = guess(mid);

        if (result == 0) {
            return mid;
        }
        else if (result == -1) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return -1;
}

int main() {

    int n = 10;

    int answer = guessNumber(n);

    cout << "The guessed number is: " << answer << endl;

    return 0;
}