#include<bits/stdc++.h>
using namespace std;
void work() {
    string str;
    cin >> str;
    int len=str.size();
    int sum1=0, sum2=0;
    for(int i=0; i<len; i++) {
        if(i<len/2) {
            sum1+=str[i]-'0';
        } else {
            sum2+=str[i]-'0';
        }
    }
    cout << (sum1==sum2 ? "YES" : "NO") << endl;
}
int main() {
    int t; cin>> t;
    while (t--) work();
    return 0;
}