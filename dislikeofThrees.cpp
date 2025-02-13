#include <iostream>
using namespace std;

bool isLiked(int num) {
    return num % 3 != 0 && num % 10 != 3;
}

int findKthLiked(int k) {
    int count = 0, num = 1;
    while (count < k) {
        if (isLiked(num)) {
            count++;
        }
        num++;
    }
    return num - 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        cout << findKthLiked(k) << "\n";
    }
    return 0;
}
