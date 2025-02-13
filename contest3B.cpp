#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        string str; cin>>str;
        bool flag=false;
        for(int i=0; i<str.size()-1; i++) {
            if(str[i] == str[i+1]) {
                flag=true;
                break;
            }
        }
        if(flag) {
            cout << "1" << endl;
        } else {
            cout << str.size() << endl;
        }

    }
}