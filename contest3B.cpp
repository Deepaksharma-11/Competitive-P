#include <iostream>
#include <vector>
using namespace std;

void solve() {
    string s;
    cin >> s;

    string result;
    for (char c : s) {
        if (!result.empty() && result.back() == c) {
            result.pop_back(); 
        } else {
            result.push_back(c);
        }
    }

   
    cout << max(1, (int)result.size()) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
