#include <iostream>
#include <vector>
#include <algorithm>   // for fill()
using namespace std;

vector<int> sortArray(vector<int>& nums) {

    int totalZero = 0;
    int totalOne = 0;

    int n = nums.size();

    // Count 0s and 1s
    for(int i = 0; i < n; i++) {
        if(nums[i] == 0)
            totalZero++;
        else if(nums[i] == 1)
            totalOne++;
    }

    vector<int> arr = nums;

    // Fill 0s
    fill(arr.begin(), arr.begin() + totalZero, 0);

    // Fill 1s
    fill(arr.begin() + totalZero, arr.end(), 1);

    return arr;
}

int main() {

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements (0s and 1s): ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = sortArray(nums);

    cout << "Sorted array: ";
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    cout << endl;

    return 0;
};