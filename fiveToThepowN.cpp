#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n; cin>>n;
    if(n==0){
        cout << "1";
        return 0;
    }
    if (n==1) {
        cout <<"05";
    } else if(n>=2) {
        cout << "25";
    }
}