#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){


    vector<int> arr = {23,45,7,9,0,1,2,3,12,32,45};

    for(int i=0;i<arr.size()-1;i++){
        for(int j=i+1;j<arr.size()-1;j++){
            if(arr[i]>arr[j]){
              int temp = arr[i];
              arr[i] = arr[j];
              arr[j] = temp;
            }
        }

    }
    for(int x:arr){
        cout<<x<<" ";
    }
}