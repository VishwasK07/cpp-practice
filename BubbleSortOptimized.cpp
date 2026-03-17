#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={5,1,4,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<=(n-1);i++){
        bool flag=true;
        for(int j=0;j<(n-i-1);j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=false;
            }
        }
        if (flag==true) break;         
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}