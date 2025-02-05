#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    int police = 0;
    int crime = 0;
    while(t--) {
        int n;
        cin >> n;
        if(n > 0) {
            police+=n;
        } else {
            if(police > 0) {
                police--;
            } else {
                crime++;
            }
        }
    }
    cout << crime << endl;
    return 0;
}