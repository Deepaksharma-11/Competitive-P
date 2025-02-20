#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n; cin>>n;
    int arr[n];
    int min=INT_MAX, max=INT_MIN;
    for(int i=0; i<n; i++) cin>>arr[i];
    for(int i=0; i<n; i++) {
        if(arr[i]>max) max=arr[i];
        if(arr[i]<min) min=arr[i];
    }
    if(min==max) cout<<0<<endl;
    else cout<<max-min<<endl;
    // cout << min << max;
}
int main() {
    int t; cin>>t;
    while(t--) solve();
}