#include <iostream>
#include <algorithm>
using namespace std;

bool isValidTimur(string s) {
    string correct = "Timur";
    sort(s.begin(), s.end());
    sort(correct.begin(), correct.end());
    return s == correct;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        if (n == 5 && isValidTimur(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
