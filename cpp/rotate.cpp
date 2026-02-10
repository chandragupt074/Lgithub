#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,6,2,3,7,4,8};
    
    int n = sizeof(arr)/sizeof(arr[0]);
   for (int i = 0; i < n; i++) {
        cout << arr[i] << " " <<endl;
    }
    int k=3;
    int end = n-k-1;
    int mid = n-k;
    int last = n-1;

    int start = 0;

    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    while(mid<last){
        int temp = arr[mid];
        arr[mid] = arr[last];
        arr[last] = temp;
        mid++;
        last--;


    }
 int st = 0;
    while(st<last){
        int temp = arr[st];
        arr[st] = arr[last];
        arr[last] = temp;
        st++;
        last--;
    }

for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    

}