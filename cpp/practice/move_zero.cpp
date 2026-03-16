#include<iostream>
using namespace std;
int main(){
    int arr[] = {23,0,4,0,2,0,34,8,0,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start=0;
    int end = n-1;

    while(start<end){
        if(arr[start]==0 && arr[end]!=0 ){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
        else if(arr[start]!=0) start++;
        else if(arr[end]==0) end--;
             
        
    }
     for (int x : arr) {
        cout << x << " ";
    }

}