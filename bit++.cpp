#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x=0;
    vector<string> str(n);
    for (int i =0; i<n; i++) {
        cin >> str[i];
        if (str[i] == "X++" || str[i] == "++X") {
            x++;
        } else {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}