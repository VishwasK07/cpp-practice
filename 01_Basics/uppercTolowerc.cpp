#include <iostream>
using namespace std;

// User-defined function
char convertToLower(char ch) {
    return ch - 'A' + 'a';
}

int main() {
    char ch;

    cout << "Enter an uppercase character: ";
    cin >> ch;

    char ans = convertToLower(ch);

    cout << "Lowercase character: " << ans << endl;

    return 0;
}