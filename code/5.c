#include <stdio.h>

int gcd(int a, int b) {
    if (!b) return a;
    return gcd(b, a % b);
}

int main() {
    long int ans = 1;
    for (int i = 2; i <= 20; i++) {
        int tmp = gcd(ans, i);
        ans = ans * i / tmp;
    }
    printf("%ld\n", ans);
    return 0;
}
