#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {

    vector<string> str = {"flow","flower","flight"};

    int n = str.size();
    if(n == 1) {
    cout << str[0];
    return 0;
}
    string result = "";
    sort(str.begin(), str.end());

    string start = str[0];
    string end = str[n - 1];

   for(int i = 0; i < start.length(); i++) {
        if(start[i] == end[i]){
            result.push_back(start[i]);

        }
         
    }

    cout<<result;
}