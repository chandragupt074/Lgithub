#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,0,1,0,1,0,1,0,0,1,0,0};
    int n = sizeof(arr) / sizeof(arr[0]);
      
//     int zeros = 0;

//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             zeros++;
//         }
//     }
// cout<<zeros<<endl;
//      for(int i=0;i<n;i++){
//         if(i<zeros){
//             arr[i] = 0;
//         }else{
//             arr[i] = 1;
//         }

//      }

//      for(int i=0;i<n;i++){
//         cout<<arr[i];
//      }






int start =0;
int end = n-1;
while(start<end){
    if(arr[start]==0) start++;
    else if(arr[end]==1) end--;
    else {
        int temp= arr[end];
        arr[end] = arr[start];
        arr[start] = temp;
         start++;
    end--;
    }
   
}

 for(int i=0;i<n;i++){
        cout<<arr[i];
      }


// int arr[]={2,0,2,1,1,0};
}


