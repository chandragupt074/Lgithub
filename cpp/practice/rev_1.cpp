#include<iostream>
#include<vector>
#include<climits>
// #include<algorithm>
using namespace std;
int main(){
   
    vector<int> arr = {12,34,56,87,90,23,87,65,90,88};

    int max = INT_MIN;
    int secmax = INT_MIN;

    for(int i=0;i<arr.size();i++){
        if(max<arr[i]){
            secmax = max;
            max = arr[i];
        }
        else if(arr[i]>secmax && arr[i]!=max){
                secmax = arr[i];
            }
        
        
    }
    cout<<secmax;
    
}