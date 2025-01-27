#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, sum = 0 ;
    cin >> n;
    int tsum = n*100;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
    }
    cout << fixed << setprecision(12) << (double)sum/tsum*100 << endl;
    return 0;
}