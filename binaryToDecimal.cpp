#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.length();
    long long ans=0;
    // cout << n << endl << s.size() << endl;
    for(int i=0; i<n; i++) {
        if(s[i] == '1') {
            ans += pow(2, n-i-1);
        }
    }
    cout << ans << endl;
    return 0;
}