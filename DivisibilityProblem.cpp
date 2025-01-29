#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        int a,  b, m = 0;
        cin >> a >> b;
        if(a%b == 0) {
            cout << m << endl;
        } else {
            m = b - a%b;
            cout << m << endl;
        }

    }
    return 0;
}