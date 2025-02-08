#include<bits/stdc++.h>
using namespace std;

void work() {
        int n; cin>>n;
        int arr[n];
        for(int i=1; i<=n; i++) cin>>arr[i];
        for(int i=1; i<=n; i++) {
            bool isunique = true;
            for(int j=1; j<=n; j++) {
                if(arr[i] == arr[j] && i != j) {
                    isunique = false;
                    break;
                }
            }
            if(isunique) {
                cout << i << endl;
            }
        }

}
int main() {
    int t; cin >> t;
    while(t--) work();
}

// #include <iostream>
// #include <unordered_map>
// #include <vector>

// using namespace std;

// void printUniqueElementsAndIndices(vector<int>& arr) {
//     unordered_map<int, int> freqMap;

//     // Step 1: Count frequency of each element
//     for (int num : arr) {
//         freqMap[num]++;
//     }

//     // Step 2: Find and print unique elements and their indices
//     for (int i = 0; i < arr.size(); i++) {
//         if (freqMap[arr[i]] == 1) {
//             cout << "Unique Element: " << arr[i] << ", Index: " << i << endl;
//         }
//     }
// }

// int main() {
//     vector<int> arr = {4, 3, 2, 3, 1, 4, 5, 6, 1}; // Example array
//     printUniqueElementsAndIndices(arr);
//     return 0;
// }
