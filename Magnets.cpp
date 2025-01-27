#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<string> mag(n);
    for (int i = 0; i < n; i++) {
        cin >> mag[i];
    }
    int groups = 1;
    for (int i=1; i< n; i++) {
        if(mag[i] != mag[i-1]) {
            groups++;
        }
    }
    cout << groups << endl;
    return 0;
}