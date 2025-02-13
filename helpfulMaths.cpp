#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin>>str;
    int n=str.size();
    for(int i=0; i<n; i+=2) {
        for(int j=0; j<n; j+=2) {
            int digit1 = str[i] - '0';
            int digit2 = str[j] - '0';
            if(digit1 < digit2) {
                swap(str[i], str[j]);
            }
        }
    }
    cout << str << endl;
    
}