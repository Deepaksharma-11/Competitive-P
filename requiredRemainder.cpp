#include <iostream>
using namespace std;

int max_k(int x, int y, int n) {
    return (n - y) / x * x + y;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int x, y, n;
        cin >> x >> y >> n;
        cout << max_k(x, y, n) << "\n";
    }
    
    return 0;
}

    
    