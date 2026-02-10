#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {12,34,56,78,90,32};

    // int max = INT_MIN;

    // for(int i=0;i<arr.size();i++){
    //     if(max<arr[i]){
    //         max = arr[i];
    //     }
    // }
    // cout<<max;

    // int min = INT_MAX;

    // for(int i=0;i<arr.size();i++){
    //     if(min>arr[i]){
    //         min = arr[i];
    //     }
    // }
    // cout<<min;

    // int low = 0;
    // int high = arr.size()-1;

    // while(low<high){
    //     int temp = arr[low];
    //     arr[low] = arr[high];
    //     arr[high] = temp;
    //     low++;
    //     high--;
        
    // }
    // for(int x : arr){
    //     cout<<x<<" ";
    // }

    // for(int i =0;i<arr.size();i++){
    //     cout<<arr[i];
    // }


    // vector<int>v = {1,2,3,4,5,6,1,8,9};
    // bool x = false;

    // for(int i =1;i<v.size();i++){
    //     if(v[i-1]<v[i]){
    //         x=true;
           
    //     }else{
    //         x = false;
    //         break;
    //     }

    // }
    // cout<<x;

//    int sum = 0;
//     for(int i =0;i<v.size();i++){
//        sum +=v[i];
//     }
//     cout<<sum;


vector<int>v = {1,2,2,3,3,5,5,6,6};
vector<int>c;
int j=-1;
for(int i =0;i<v.size();i++){
    if(v[i]!=c[j]){
        j++;
        c[j] = v[i];
    }
    else{
        continue;
    }

}
for(int x:c){
    cout<<x<<" ";
}




}