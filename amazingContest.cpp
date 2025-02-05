#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int count=0;
    int low = a[0];
    int high = a[0];
    for(int i=1; i <n; i++) {
        // cout << a[i] << endl;
        if(a[i] > high) {
            high = a[i];
            count++;
        }
        if(a[i] < low) {
            low = a[i];
            count++;
        }
    }
    cout << count << endl;
    return 0;
}