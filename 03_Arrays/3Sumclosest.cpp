#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int dif = INT_MAX;
        int ans = 0;

        for (int i = 0; i < n - 2; i++) {

            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int j = i + 1;
            int k = n - 1;

            while (j < k) {

                int sum = nums[i] + nums[j] + nums[k];

                if (sum == target)
                    return target;

                if (abs(sum - target) < dif) {
                    dif = abs(sum - target);
                    ans = sum;
                }

                if (sum > target)
                    k--;
                else
                    j++;
            }
        }

        return ans;
    }
};

int main() {
    Solution s;

    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;

    cout << s.threeSumClosest(nums, target);

    return 0;
}