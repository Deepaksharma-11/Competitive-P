#include<bits/stdc++.h>
using namespace std;
void work() {
    int a,b,c; cin>>a>>b>>c;
    if(a+b==c ) cout << "+\n";
    else cout << "-\n";
}
int main() {
    int t; cin >> t;
    while(t--) work();
    return 0;
}