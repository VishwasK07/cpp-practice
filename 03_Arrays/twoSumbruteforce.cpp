#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {

            int first = nums[i];
            int second = nums[j];
            int sum = first + second;

            if(sum == target) {
                return {i, j};
            }
        }
    }

    return {};
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    vector<int> result = twoSum(nums, target);

    if(result.size() == 2) {
        cout << "Indices are: " << result[0] << " " << result[1] << endl;
    } else {
        cout << "No solution found" << endl;
    }

    return 0;
};