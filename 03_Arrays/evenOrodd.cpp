#include<iostream>
using namespace std;
void printEvenOdd(int arr[],int size){
    for(int i=0;i<size;i++){
        int number = arr[i];
        if(number%2 == 0){
            cout<<"Even ";
        }
        else{
            cout<<"Odd ";
        }
    }
}
int main(){
    int arr[5] = {11,12,13,14,15};
    int size = 5;
    printEvenOdd(arr,size);
}    
