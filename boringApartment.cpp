#include <iostream>
using namespace std;

int countKeyPresses(int x) {
    int digit = x % 10; 
    int length = 0, temp = x;
    
    
    while (temp > 0) {
        length++;
        temp /= 10;
    }
    

    int totalPresses = 0;
    for (int i = 1; i <= length; i++) {
        totalPresses += i;
    }
    
    return (digit - 1) * 10 + totalPresses;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x;
        cin >> x;
        cout << countKeyPresses(x) << endl;
    }
    
    return 0;
}
