#include<bits/stdc++.h>
using namespace std;
int main() {

    int n, a;
    cin >> n;
    map<int, int> mpp;
    int max = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mpp[x]++;
        // Update max if x has higher frequency or is larger when frequencies are equal
        if (mpp[x] > mpp[max] || (mpp[x] == mpp[max] && x > max)) {
            max = x;
        }
    }
    cout << max;

    return 0;
}
