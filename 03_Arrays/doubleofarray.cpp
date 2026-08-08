#include<iostream>
using namespace std;
void printTwice(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<< 2 * arr[i]<<" ";
    }
}
int main(){
    int arr[5]={11,22,33,44,55};
    int size = 5;
    printTwice(arr,size);
}