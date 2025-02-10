#include<bits/stdc++.h>
using namespace std;
string toPlural(const string& word) {
    return word.substr(0, word.size() - 2) + "i";
}

int main() {
    int t;
    cin >> t;
    vector<string> ans;
    
    while (t--) {
        string word;
        cin >> word;
        ans.push_back(toPlural(word));
    }
    
    for (const string& it : ans) {
        cout << it << "\n";
    }
    
    return 0;
}
