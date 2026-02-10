// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[] ={23,12,45,67,100,99,37,100} ;

//     int n=sizeof(arr)/sizeof(arr[0]);

//     int max = INT_MIN;
//     int secmax = INT_MIN;
//     int tmax = INT_MIN;

//     for(int i=0;i<n-1;i++){
//         if(arr[i]>max){
//             tmax = secmax;
//             secmax = max;
//             max = arr[i];
//         }
//         else{
//          if(arr[i]<max && arr[i]>secmax){
//             tmax = secmax;
//             secmax=arr[i];

//          }
//         }
//     }
// cout<<secmax;
// cout<<max;
// cout<<tmax;
// }


#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int nums[] = {3,6,7,8,9,10};
    int m = sizeof(nums)/sizeof(nums[0]);
    vector<int>v(n+m);
    int i=0;
    int j=0;
    int k=0;

    while(i<=n && j<=m){
        if(arr[i]<nums[j]){
            v[k]=arr[i];
            i++;
            k++;
        }
        else{
          v[k] = nums[j];
          j++;
          k++;
        }
    }
    while(i<n-1){
        v[k]=arr[i];
        i++;
        k++;
    }

     while(j<m-1){
        v[k]=nums[j];
        j++;
        k++;
    }
for(int x:v){
    cout<<x<<" ";
}
}