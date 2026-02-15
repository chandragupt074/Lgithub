#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){

    int height[] = {0,1,0,2,1,0,1,3,2,1,2,1};

    int n = sizeof(height) / sizeof(height[0]);
   

    int prev[n];
    prev[0] = -1;
    int max =height[0];
    for(int i =1;i<n;i++){
        prev[i] = max;
        if(height[i]>max){
            max = height[i];

        }
        
    }

    


    int next[n];
     next[n - 1] = -1;
        max = height[n-1];

       

        for(int i =n-2;i>=0;i--){
            next[i] = max;
            if(max<height[i]) max = height[i];
        }

    
    
   
    for(int i=0;i<n;i++){
        prev[i] = min(prev[i],next[i]);
    }


   int water = 0;

   for(int i=1;i<n-1;i++){
    if(height[i]<prev[i]){
        water+= (prev[i]-height[i]);
    }
   }

   cout<<water;

    
}