#include<bits/stdc++.h>
using namespace std;
void work() {
    int a, b; cin >> a >> b;
    int diff = abs(a-b);
    int count = diff/10 + (diff%10 != 0);
    cout << count << endl;
}
int main() {
    int t; cin >> t;
    while(t--) work();
    return 0;
}