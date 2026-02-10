#include<iostream>
using namespace std;
int main(){
    // int arr[] = {1,2,3,4,6,7,89,1,7,9,1};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int store=0;


    // for(int i = 0;i<=n;i++){
    //     if(arr[i]==1){
    //         store = i;
    //     };

    // }
    // cout<<store;

    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    // int nums[n];

    int start=0;
    int end=n-1;

    while(start<end){
      int temp;
      temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;
      start++;
      end--;
    }
 for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
   

}