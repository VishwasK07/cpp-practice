#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> previousSmallerElement(vector<int>& arr) {
    int n = arr.size();

    vector<int> ans(n);
    stack<int> s;

    for (int i = 0; i < n; i++) {

        // Remove elements greater than or equal to current element
        while (!s.empty() && s.top() >= arr[i]) {
            s.pop();
        }

        // If stack is empty, no previous smaller element exists
        if (s.empty()) {
            ans[i] = -1;
        }
        else {
            ans[i] = s.top();
        }

        // Push current element
        s.push(arr[i]);
    }

    return ans;
}

int main() {
    vector<int> arr = {1, 3, 2, 4, 5};

    vector<int> ans = previousSmallerElement(arr);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}