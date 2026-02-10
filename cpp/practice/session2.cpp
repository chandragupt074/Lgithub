#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int arr[] = {24,45,67,89,1,0,45,32};
    int n = sizeof(arr)/sizeof(arr[0]);

    // int x = INT_MAX;

    // for(int i=0;i<n;i++){
    //     if(arr[i]<x){
    //         x = arr[i];
    //     }

    // }

    // cout<<x;

//    int low = 0;
//    int high = n-1;

//    while(low<high){
//     int temp = arr[low];
//     arr[low] = arr[high];
//     arr[high] = temp;
//     low++;
//     high--;
//    }

//    for(int x:arr){
//     cout<<x<<" ";
//    }

// bool flag = true;
// for(int i=0;i<n;i++){
//     if(arr[i]>arr[i+1]){
//         flag = false;

//     }

// cout<<flag;

vector<int>v;
vector<int>k;

v.push_back(12);
v.push_back(13);
v.push_back(12);
v.push_back(11);
v.push_back(14);
v.push_back(13);
v.push_back(15);
v.push_back(1);
v.push_back(2);

for(int i=0;i<v.size();i++){
  bool duplicate = false;

  for(int j = 0;j<k.size();j++){
    if(v[i]==k[j]){
        duplicate = true;
        break;
    }
  }
  if(!duplicate){
    k.push_back(v[i]);
  }

  
}
v=k;
for(int x:v){
    cout<<x<<" ";
  }
}
 

