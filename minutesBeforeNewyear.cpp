#include<bits/stdc++.h>
using namespace std;
void solve() {
    int h, m; cin>>h>>m;
    cout<<(abs((60*h+m)-1440)) << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) solve();
}
