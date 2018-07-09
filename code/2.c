#include <stdio.h>

int main() {
    int a = 1, b = 1, ans = 0;
    while (a < 4000000) {
        a = a + b;
        b = a - b;
        if (a % 2 == 0) ans += a;
    }
    printf("%d\n", ans);
    return 0;
}
