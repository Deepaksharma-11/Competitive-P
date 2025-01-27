#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, h, size=0;
    cin >> n >> h;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if(a>h) {
            size+=2;
        } else {
            size++;
        }
    }
    cout << size << endl;
    return 0;
}