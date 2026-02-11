#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    // Remove duplicate elements from sorted array


vector<int>v = {1,1,2,3,4,5,5,6};

int i =0;
for(int j = 1;j<v.size();j++){
    if(v[i]!=v[j]){
        i++;
        v[i] = v[j];

    }
}

for(int k=0;k<=i;k++){
    cout<<v[k]<<" ";

}
}