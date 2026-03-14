#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={5,10,1,4,2,3,20,-8};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        int mn=INT_MAX;
        int mindx=-1;
        for(int j=i;j<n;j++){
            if(mn>arr[j]){
                mn=arr[j];
                mindx=j;
            }
        }
        swap(arr[i],arr[mindx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}