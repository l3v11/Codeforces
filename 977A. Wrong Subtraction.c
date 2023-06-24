#include <stdio.h>
#include <stdlib.h>

int main() {

    long n, k, rem;

    scanf("%ld %ld", &n, &k);

    for (int i=0; i<k; i++) {
        rem = n % 10;

        if (rem == 0) {
            n /= 10;
        } else {
            n -= 1;
        }
    }

    printf("%d\n", n);

    return 0;
}