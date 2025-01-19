#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<multiset<int>> mset(n);

    for(int i=0; i<n; i++) {
        
        for(int j=0; j<3; j++) {
            int x;
            cin >> x;
            mset[i].insert(x);
        }
    }
    int ans = 0;
    for(int i=0; i<n; i++) {
        if(mset[i].count(1) >= 2) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}