#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int tram = 0;
    int max = 0;
    for (int i=0; i <n; i++) {
        int a, b;
        cin >> a >> b;
        if(i==0) {
            tram = b;
            max=b;
        } else {
            tram = tram-a+b;
            if(tram>max) {
                max = tram;
            }
    
          }
  }
    cout << max << endl;
    return 0;

}