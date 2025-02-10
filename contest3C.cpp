#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        vector<int> b(m);
        for (int i = 0; i < m; ++i) {
            cin >> b[i];
        }

        unordered_set<int> possible_prev;
        possible_prev.insert(a[0]);
        possible_prev.insert(b[0] - a[0]);

        bool ok = true;
        for (int i = 1; i < n; ++i) {
            int curr_orig = a[i];
            int curr_flip = b[0] - a[i];
            unordered_set<int> current;

            for (int prev : possible_prev) {
                if (curr_orig >= prev) {
                    current.insert(curr_orig);
                }
                if (curr_flip >= prev) {
                    current.insert(curr_flip);
                }
            }

            possible_prev.swap(current);
            if (possible_prev.empty()) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }

    return 0;
}