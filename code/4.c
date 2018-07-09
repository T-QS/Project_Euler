#include <stdio.h>

int check(int a) {
    int bak = a;
    int num = 0;
    while (a > 0) {
        num = num * 10 + a % 10;
        a = a / 10;
    }
    if (num == bak) return 1;
    return 0;
}

int main() {
    int ans = 0;
    int tmp = 100;
    for (int i = 999; i > tmp; i--) {
        for (int j = 100; j < 1000; j++) {
            int k = i * j;
            if (check(k) && (k > ans)) {
                ans = k;
                tmp = j;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}
