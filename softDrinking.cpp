#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int totalDrink = k*l;
    int totalLime = c*d;
    int totalSalt = p;
    int totalToast = totalDrink/nl;
    int totalLimeToast = totalLime;
    int totalSaltToast = totalSalt/np;
    int minToast = min(totalToast, min(totalLimeToast, totalSaltToast));
    cout << minToast/n << endl;
    return 0;
}