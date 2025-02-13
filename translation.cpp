#include<bits/stdc++.h>
using namespace std;
int main() {
    string s1,s2;
    cin >> s1 >> s2;
    int n1 = s1.size();
    int n2 = s2.size();
    if(n1!=n2) {
        cout << "NO";
        return 0;
    }
    bool flag = true;
    for(int i=0; i<n1; i++) {
        if(s1[i] != s2[n1-i-1]) {flag = false; break;}
    }
    if(flag) cout << "YES";
    else cout << "NO";
    
}