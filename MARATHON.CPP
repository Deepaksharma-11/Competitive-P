#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    int arr[4];
    while(t--) {
        for (int i=0; i<4; i++) {
            cin>>arr[i];
        }
        int temp = arr[0];
        int count = 0;
        // sort(arr, arr+4, greater<int>());
        for (int i=0; i<4; i++) {
            if (arr[i] > temp) {
                // cout<<i<<endl;
                // break;/
                count++;
            }
        }
        cout << count << endl;
    }
    
    return 0;
}