#include<bits/stdc++.h>
using namespace std;
void work() {
    int n; cin >> n;
    if(n<=1399) cout << "Division 4\n";
    else if(n<=1599) cout << "Division 3\n";
    else if(n<=1899) cout << "Division 2\n";
    else cout << "Division 1\n";    
}
int main() {
    int t; cin >> t;
    while(t--) work();
    return 0;
}