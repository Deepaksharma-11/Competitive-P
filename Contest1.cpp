#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> result;
    while(n--) {
        int a, b;
        cin >> a >> b;
        if(a==1 && b==1) {
            cout << 1 << endl;
            continue;
        }
        cout << b-a << endl;
    }
    return 0;
}