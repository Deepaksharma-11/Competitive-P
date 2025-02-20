#include <iostream>
#include <unordered_set>
using namespace std;

bool isSuspicious(int n, string tasks) {
    unordered_set<char> seen;
    char last = tasks[0];
    seen.insert(last);
    
    for (int i = 1; i < n; i++) {
        if (tasks[i] != last) {
            if (seen.count(tasks[i])) {
                return false; 
            }
            seen.insert(tasks[i]);
            last = tasks[i];
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string tasks;
        cin >> tasks;
        
        if (isSuspicious(n, tasks)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
