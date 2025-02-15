#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<=1) return false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}
int nextPrime(int num) {
    num++;
    while(!isPrime(num)) {
        num++;
    }
    return num;
}
int main() {
    int n,m; cin >> n>>m;
    if(nextPrime(n)==m) {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}