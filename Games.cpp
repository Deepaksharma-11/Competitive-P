#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> teams;
    for (int i = 0; i < n; ++i) {
        int h, a;
        cin >> h >> a;
        teams.push_back({h, a});
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && teams[i].first == teams[j].second) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}