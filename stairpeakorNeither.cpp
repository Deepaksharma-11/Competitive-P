#include<bits/stdc++.h>
using namespace std;
void solve() {
    int a , b,c; cin>>a>>b>>c;
    if(b>a && b<c) cout << "STAIR" << endl;
    else if(b>a && b>c) cout << "PEAK" << endl;
    else cout << "NONE" << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
}