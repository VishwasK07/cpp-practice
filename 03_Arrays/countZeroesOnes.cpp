#include<iostream>
using namespace std;
void countZeroesOnes(int arr[],int size){
    int totalZeroes = 0;
    int totalOnes = 0;
    for(int i=0;i<size;i++){
        int number = arr[i];
        if(number == 0){
            totalZeroes++;
        }
        else if(number == 1){
            totalOnes++;
        }
    }
    cout<<"Total Zeroes: "<<totalZeroes<<endl;
    cout<<"Total Ones: "<<totalOnes<<endl;
}
int main(){
    int arr[5]={1,1,0,1,0};
    int size = 5;
    countZeroesOnes(arr,size);
}