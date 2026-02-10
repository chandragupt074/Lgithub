#include<iostream>
using namespace std;
int main(){
    // int odd = 0;
    // int even = 0;
    // int arr[] = {23,1,45,8,4,40,10,9,11};
    // int n = sizeof(arr)/sizeof(arr[0]);

    // for(int i =0;i<n;i++){
    //     if(arr[i]%2==0){
    //         even++;
    //     }
    //     else{odd++;}
    // }

    // cout<<"Even:"<<even<<endl;
    // cout<<"Odd:"<<odd;


    int arr[] = {0,0,0,0,12};
    int n = sizeof(arr)/sizeof(arr[0]);


    int low = 0;
    int high = n-1;

    while(low<high){
        if(arr[low]==0 && arr[high]!=0){
            int temp = arr[low];
            arr[low] = arr[high];
            arr[high]  = temp;
            low++;
            high--;
        }
        else if(arr[high]==0){
            high--;

        }
        else{
            low++;
        }
    }

    for(int x:arr){
        cout<<x;
    }

}