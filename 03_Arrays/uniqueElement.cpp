#include<iostream>
#include<vector>
using namespace std;
int findUniqueElement(vector<int>& nums){
    int ans = 0;
    int n = nums.size();
    for(int i = 0; i < n ; i++){
        ans = ans ^ nums[i];

    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> nums(n);

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int unique = findUniqueElement(nums);

    cout << "Unique element is: " << unique << endl;

    return 0;
};

