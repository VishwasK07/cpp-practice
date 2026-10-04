#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (char ch : s) {

        // Opening brackets
        if (ch == '(' || ch == '[' || ch == '{') {
            st.push(ch);
        }

        // Closing brackets
        else {
            if (st.empty()) {
                return false;
            }

            if ((ch == ')' && st.top() == '(') ||
                (ch == ']' && st.top() == '[') ||
                (ch == '}' && st.top() == '{')) {

                st.pop();
            }
            else {
                return false;
            }
        }
    }

    // Stack should be empty at the end
    return st.empty();
}

int main() {
    string s = "({[]})";

    if (isValid(s)) {
        cout << "Valid Parentheses";
    }
    else {
        cout << "Invalid Parentheses";
    }

    return 0;
}