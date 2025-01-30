#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int len = s.size();
        vector<int> ans;
        for(int i=0; i<len; i++) {
            int digit = s[i] - '0';
            if(digit == 0) continue;
            int power = (len - 1 - i);
            int num = digit;
            for(int j=0; j<power; j++) {
                num *= 10;
            }
            ans.push_back(num);

        }
        cout << ans.size() << endl;
        for(auto x: ans) {
            cout << x << " ";
        }

    }

    return 0;
}