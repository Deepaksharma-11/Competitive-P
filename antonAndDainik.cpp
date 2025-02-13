#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    char str[n];
    int ant_count = 0, dai_count = 0;
    for(int i=0; i<n; i++){
        cin >> str[i];
        if(str[i] == 'A') ant_count++;
        else dai_count++;
    }
    if(ant_count > dai_count) cout << "Anton" << endl;
    else if(dai_count > ant_count) cout << "Danik" << endl;
    else cout << "Friendship" << endl;
}