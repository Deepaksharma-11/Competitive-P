#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;
        
        unordered_set<int> sums;
        for (int x : a) {
            for (int y : b) {
                sums.insert(x + y);
            }
        }
        
        if (sums.size() >= 3) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}