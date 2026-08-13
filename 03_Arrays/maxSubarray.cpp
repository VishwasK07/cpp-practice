#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int currSum = 0;
        int maxSum = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {

            currSum = currSum + nums[i];

            if (currSum > maxSum) {
                maxSum = currSum;
            }

            if (currSum < 0) {
                currSum = 0;
            }
        }

        return maxSum;
    }
};

int main() {

    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    Solution obj;

    cout << obj.maxSubArray(nums);

    return 0;
}