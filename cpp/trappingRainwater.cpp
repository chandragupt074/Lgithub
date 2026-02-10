#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    int height[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = sizeof(height) / sizeof(height[0]);
    int prev[n];
    prev[0] = -1;
    int max = 0;
    for (int i = 1; i < n; i++)
    {
        prev[i] = max;
        if (max < height[i])
        {
            max = height[i];
        }
    }
    max = height[n - 1];
    int next[n];
    next[n - 1] = -1;

    for (int i = n - 2; i >= 0; i--)
    {
        next[i] = max;
        if (max < height[i])
        {
            max = height[i];
        }
    }

    int mini[n];
    for (int i = 0; i < n; i++)
    {
        mini[i] = min(prev[i], next[i]);
    }
    int water = 0;
  
    for (int i = 1; i < n - 1; i++)
    {
        if (height[i] < mini[i])
        {
            water += (mini[i] - height[i]);
        }
    }

    cout<<water;
    // for (int x : next)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
    // for (int y : prev)
    // {
    //     cout << y << " ";
    // }
    // cout << endl;
    // for (int z : mini)
    // {
    //     cout << z << " ";
    // }
}