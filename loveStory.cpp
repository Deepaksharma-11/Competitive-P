#include<bits/stdc++.h>
using namespace std;
int solve(string str) {
    string s = "codeforces";
    int count = 0;
    for(int i=0; i<str.size(); i++) {
        if(str[i] != s[i]) {
            count++;
        }
    }
    return count;
}
int main() {
    int t; cin>>t;
    while(t--) {
        string str; cin>>str;
        int count = solve(str);
        cout << count << endl;
    }
}