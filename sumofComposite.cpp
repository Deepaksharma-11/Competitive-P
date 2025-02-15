#include<bits/stdc++.h>
using namespace std;
bool isComposite(int num) {
    if(num<4) return false;
    for(int i=2; i*i<=num; i++) {
        if(num%i==0) return true;
    }
    return false;
}
int main() {
    int n; cin>>n;
    for(int i=4; i<n;i++) {
        int y=n-i;
        if(isComposite(y) && isComposite(i)) {
            cout << i << " " << y;
            return 0;
        }
    }
}