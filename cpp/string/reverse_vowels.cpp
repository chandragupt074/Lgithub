#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}

int main() {
    string s = "leetcode";

    int start = 0;
    int end = s.size() - 1;

    while (start < end) {
        if (isVowel(s[start]) && isVowel(s[end])) {
            swap(s[start], s[end]);
            start++;
            end--;
        }
        else if (!isVowel(s[start])) {
            start++;
        }
        else {
            end--;
        }
    }

    cout << s;
}