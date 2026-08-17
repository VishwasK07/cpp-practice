#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();

    vector<int> ans(n);

    for (int i = 0; i < n; i++) {

        int prod = 1;

        for (int j = 0; j < n; j++) {

            if (i != j) {
                prod *= nums[j];
            }
        }

        ans[i] = prod;
    }

    return ans;
}

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> ans = productExceptSelf(nums);

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}