#include<iostream>
#include <vector>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6};

    int n = sizeof(arr)/sizeof(arr[0]);

    int nums[]={7,8,9,10,11,12,13,14,15};

    int m=sizeof(nums)/sizeof(nums[0]);

   vector<int> name(m + n);

    int i = 0;
    int j = 0;
    int k = 0;

    while(i<n && j<m){
        if(arr[i]<nums[j]){
            name[k] = arr[i];
            i++;
            k++;
        }
        else{
            name[k] = nums[j];
            j++;
            k++;

        }
       
    }

    while(i<n){
        name[k++] = arr[i++];
    }

    while(j<m){
        name[k++]=nums[j++];

    }

     for (int x : name) {
        cout << x << " ";
    }

    return 0;

    
}