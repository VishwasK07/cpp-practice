#include <iostream>
#include <vector>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {

    int n = nums.size();
    vector<int> ans(n);

    int left = 0;
    int right = n - 1;
    int pos = n - 1;

    while (left <= right) {

        int leftSquare = nums[left] * nums[left];
        int rightSquare = nums[right] * nums[right];

        if (leftSquare > rightSquare) {
            ans[pos] = leftSquare;
            left++;
        }
        else {
            ans[pos] = rightSquare;
            right--;
        }

        pos--;
    }

    return ans;
}

int main() {

    vector<int> nums = {-7, -3, 2, 3, 11};

    vector<int> result = sortedSquares(nums);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}