#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arrays(n);
    vector<long long> total_sums(n);

    for (int i = 0; i < n; i++) {
        arrays[i].resize(m);
        long long sum = 0;
        for (int j = 0; j < m; j++) {
            cin >> arrays[i][j];
            sum += arrays[i][j];
        }
        total_sums[i] = sum;
    }

    
    vector<int> indices(n);
    for (int i = 0; i < n; i++) indices[i] = i;
    
    sort(indices.begin(), indices.end(), [&](int a, int b) {
        return total_sums[a] > total_sums[b]; 
    });

    
    long long max_score = 0, prefix_sum = 0;
    vector<int> concatenated;
    
    for (int idx : indices) {
        for (int val : arrays[idx]) {
            concatenated.push_back(val);
        }
    }

    
    for (int val : concatenated) {
        prefix_sum += val;
        max_score += prefix_sum;
    }

    cout << max_score << "\n";
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
