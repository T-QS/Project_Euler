#include <stdio.h>

int main() { 
    int a;
    int x[32] = {0};
    scanf("%d", &a);
    for (int i = 0; a > 0; i++) {
        x[i] = a % 2;
        a = a / 2;     
    }
    for (int i = 31; i >= 0; i--) {
        printf("%d", x[i]);    
    }
    return 0;
}
