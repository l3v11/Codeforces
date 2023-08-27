#include <stdio.h>
#include <stdlib.h>

int main() {

    int t;
    long int n;

    scanf("%d", &t);

    while (t--) {
        scanf("%ld", &n);

        printf("%ld\n", (n-1) / 2);
    }

    return 0;
}