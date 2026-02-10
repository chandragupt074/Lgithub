#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> arr = {1, 4, 2, 3};
    int n = arr.size();

    for (int t = 0; t < 24; t++) {

        int idx = -1;

        // 1️⃣ find break point
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] < arr[i + 1]) {
                idx = i;
                break;
            }
        }

        // 2️⃣ if last permutation
        if (idx == -1) {
            reverse(arr.begin(), arr.end());
        } else {

            // 3️⃣ find element just greater than arr[idx]
            for (int j = n - 1; j > idx; j--) {
                if (arr[j] > arr[idx]) {
                    swap(arr[j], arr[idx]);
                    break;
                }
            }

            // 4️⃣ reverse suffix
            reverse(arr.begin() + idx + 1, arr.end());
        }

        // print
        for (int x : arr) cout << x << " ";
        cout << " || ";
    }
}
