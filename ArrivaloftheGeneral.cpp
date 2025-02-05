#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    vector<int> a;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int min=a[0], max=a[0];
    int minIndex=0, maxIndex=0;
    for(int i=0; i<n; i++) {
        if(a[i] <= min) {
            min = a[i];
            minIndex = i;
        }
        if(a[i] > max) {
            max = a[i];
            maxIndex = i;
        }
    }
    cout << maxIndex + (n-1-minIndex) - (minIndex < maxIndex ? 1 : 0) << endl;
    return 0;
}