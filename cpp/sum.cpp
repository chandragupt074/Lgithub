#include<iostream>
using namespace std;
#include <climits> 
int main(){
    // int arr[] = {12,3,4,5,7,8,9,90,4};
    // int sum=0;

    // for(int i=0;i<=8;i++){
    //     sum+=arr[i];
        
    // }
    // cout<<sum;
// bool flag = false;
//     for(int i =0;i<=8;i++){
//         if(arr[i]==8){
//            flag=true;
//         }  
//     }
//     if(flag==true) cout<<"Element is found";
//     else cout<<"element is present";
 

int arr[]={1,2,5,10,50,80,70};

int max = INT_MIN;
int secmax = INT_MIN;
int tmax = INT_MIN;

int n=sizeof(arr)/sizeof(arr[0]);

for(int i=0;i<=n;i++){
    if(arr[i]>max){
        tmax = secmax;
        secmax = max;
        max = arr[i];
    }
    else if(tmax<arr[i]&&tmax!=secmax&&secmax!=max){
        tmax=secmax;
        secmax=arr[i];
    }
}
cout<<tmax;


}