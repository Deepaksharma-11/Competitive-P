#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    scanf("%lld", &n);

    long long sum;
    if (n % 2 == 0) {
        sum = n / 2;
    } else {
        sum = -(n / 2 + 1);
    }

    printf("%lld\n", sum);
    return 0;
}
