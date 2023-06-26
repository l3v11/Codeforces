#include <stdio.h>
#include <stdlib.h>

int main() {

    int t;
    long a, b;

    scanf("%d", &t);

    while (t--) {
        int div=0, incr=0;

        scanf("%ld %ld", &a, &b);

        if (a % b == 0) {
            printf("0\n");
            continue;
        }

        div = a / b;
        incr = (div + 1) * b;

        printf("%ld\n", incr - a);
    }

    return 0;
}