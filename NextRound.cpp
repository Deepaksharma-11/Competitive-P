#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k, count = 0;
    cin >> n >> k;
    int arr[n];
    for (int i=1; i <=n; i++) {
        cin >> arr[i-1];
        
    }
    for (int i=1; i <=n; i++) {
        
        if(arr[i-1]>=arr[k-1] && arr[i-1]>0) {
            count++;
        }
    }
    cout << count << endl;
    
    return 0;
}