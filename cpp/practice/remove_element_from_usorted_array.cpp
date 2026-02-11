#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int>arr= {2,3,4,2,4,3,5,6,7,5,8,8};

    int mod =0;

    for(int i=0;i<arr.size();i++){

        bool flag = false;

        for(int j=0;j<i;j++){
            if(arr[i] == arr[j]){
                flag = true;
                break;
            }
        }

        if(!flag){
            arr[mod] = arr[i];
            mod++;
        }
    }
    
    for(int k=0;k<mod;k++){
        cout<<arr[k]<<" ";
    }

    

}