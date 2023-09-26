#include <stdio.h>

int main() {

    int a, b, c;

    scanf("%d\n%d\n%d", &a, &b, &c);

    int max_val = a + (b * c);
    
    if (a * (b + c) > max_val) {
        max_val = a * (b + c);
    }
    if (a * b * c > max_val) {
        max_val = a * b * c;
    }
    if ((a + b) * c > max_val) {
        max_val = (a + b) * c;
    }
    if (a + b + c > max_val) {
        max_val = a + b + c;
    }
    printf("%d\n", max_val);
    return 0;
}