#include <stdio.h>

int main() {
    int prime[20005] = {0};
    for (int i = 2; i < 20000; i++) {
        if (prime[i] == 0) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > 20000) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    long long num = 600851475143;
    int ans;
    for (int i = 1; i <= prime[0]; i++) {
        if (num % prime[i] == 0) {
            ans = prime[i];
            if (num / prime[i] < prime[i]) break;
        }
    }
    printf("%d\n", ans);
    return 0;
}
