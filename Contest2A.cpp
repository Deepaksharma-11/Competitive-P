#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    int n;
    int a[n], b[n];
    while(t--) {
        cin >> n;
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }
        for(int i=0; i<n; i++) {
            cin >> b[i];
        }
    set<int> as, bs;
    for(int i=0; i<n; i++) {
        as.insert(a[i]);
        bs.insert(b[i]);
    }
    if(n/as.size()==s.size() || n/bs.size()==bs.size()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    }


    return 0;
}