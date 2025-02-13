#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    
    vector<int> arr(n);
    int max_burles = 0;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        max_burles = max(max_burles, arr[i]);
    } 
    int total = 0;
    for(int i=0; i<n; i++) {
        total+= max_burles-arr[i];
    }
    cout << total << endl;
}