#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    set<int> s;
    for(int i=0; i<1000; i++ ){
        ++n;
        s = {n/1000, n/100%10, n/10%10, n%10};
        if (s.size() == 4) {
        cout << n << endl;
        return 0;
    }
    }
    
    return 0;

}