#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[] = {12,45,65,3,78,90,88};
    int n = sizeof(arr)/sizeof(arr[0]);

    int max = INT_MIN;
    int secmax = INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            secmax = max;
            max = arr[i];
        }
        else if(arr[i]<max && arr[i]>secmax){
            secmax = arr[i];
        }
    }

    cout<<"max:"<<max<<"secmax:"<<secmax;
}