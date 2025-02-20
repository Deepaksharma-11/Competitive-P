#include <iostream>
#include <vector>

using namespace std;

string solve(const vector<int>& a) {
    int n = a.size();
    
    // Check if we can form a viable cycle of adjacent clocks
    for (int i = 0; i < n; i++) {
        if (a[i] > 1 && a[(i + 1) % n] > 1) {
            return "YES";
        }
    }
    
    return "NO";
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        cout << solve(a) << endl;
    }
    
    return 0;
}