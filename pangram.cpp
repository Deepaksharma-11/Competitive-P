#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string str(n, '\0');
    cin >> str;
    // cout << str.size();
    transform(str.begin(), str.end(),str.begin(), ::tolower);
    bool alpbet[26] = {false};
    for(int i=0; i<n; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            alpbet[str[i]-'a'] = true; 
        }
    }
    for(int i=0; i<26; i++) {
        if(alpbet[i]==false) {
            cout << "NO";
            return 0;
        } 
    }
    cout << "YES";

}