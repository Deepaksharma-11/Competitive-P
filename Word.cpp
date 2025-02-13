#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin >> str;
    int str_low =0, str_high =0;
    for(int i=0; i<str.size(); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str_low++;
        } else {
            str_high++;
        }
    }
    if(str_high > str_low) {
        for( char &c: str) {
            c = toupper(c);
        }
    } else {
        for( char &c: str) {
            c = tolower(c);
        }
    }
    cout << str << endl;
}