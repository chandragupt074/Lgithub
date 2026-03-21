#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int count = 0;
    char alph = '0';
    string str = "hhapahayhsichswhallah";

    int max = 0;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        int count = 1;

        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
           
        }

        if (max < count)
        {
             alph = str[i]; 
            max = count;
        }
    }
    cout << alph << " " << max;
}