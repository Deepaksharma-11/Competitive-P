#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        string str; cin>>str;
        for (char &c : str) {
            c = tolower(c);
        }
        
        cout << (str == "yes" ? "YES" : "NO") << endl;
    }
}