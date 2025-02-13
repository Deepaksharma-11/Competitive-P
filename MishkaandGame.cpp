#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    int sum_m = 0, sum_c=0;
    while(t--) {
        int a,b; cin>>a>>b;
        if(a>b) {
            sum_m++;
        } else if (a<b) {
            sum_c++;
        }
    }
    if(sum_m > sum_c)  {
        cout << "Mishka" << endl;
    } else if (sum_m < sum_c) {
        cout << "Chris" << endl;
    } else {
        cout << "Friendship is magic!^^" << endl;
    }
}