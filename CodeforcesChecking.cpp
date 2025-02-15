#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    string s="codeforces";
    while (t--)
    {
        char a; cin >> a;
        bool flag = false;
        for(int i=0; i<s.size(); i++) {
            if(a == s[i]) {
                flag = true;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
}