#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n, k;
    cin >> n >> k;
    long long mid = n/2 + n%2;
    long long ans = 0;
    if(k <= mid) {
        ans = 2*k - 1;
    } else {
        ans = 2*(k-mid);
    }
    cout << ans << endl;
    return 0;
}