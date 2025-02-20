#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    long long c1 = n / 3;
    long long c2 = n / 3;
    
    if (n % 3 == 1) c1++;  
    if (n % 3 == 2) c2++;  
    
    cout << c1 << " " << c2 << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) solve();
}
