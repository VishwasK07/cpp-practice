#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums) {
    int n = nums.size();

    vector<int> ans(n);
    stack<int> s;

    for (int i = n - 1; i >= 0; i--) {

        // Remove smaller or equal elements
        while (!s.empty() && s.top() <= nums[i]) {
            s.pop();
        }

        // If stack is empty, no greater element exists
        if (s.empty()) {
            ans[i] = -1;
        }
        else {
            ans[i] = s.top();
        }

        // Push current element
        s.push(nums[i]);
    }

    return ans;
}

int main() {
    vector<int> nums = {6, 8, 0, 1, 3};

    vector<int> ans = nextGreaterElement(nums);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}