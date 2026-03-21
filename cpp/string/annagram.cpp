#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string a = "abc";
    string b = "cab";

    int i=0;
    bool x = true;
   sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    while(i<=a.length()-1){
    if(a[i]!=b[i]){
       x = false;
       break;
        
    }
    i++;
        
    }
     if(x){
        cout << "Anagram";
    } else {
        cout << "Not Anagram";
    }
}