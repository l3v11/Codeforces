#include <stdio.h>
#include <stdlib.h>

int main() {

    int k, l, m, n, d;

    scanf("%d\n%d\n%d\n%d\n%d", &k, &l, &m, &n, &d);

    int count = d;

    for (int i=1; i<=d; i++) {
        if ((i%k != 0) && (i%l != 0) && (i%m != 0) && (i%n != 0)) {
            count--;
        }
    }

    printf("%d\n", count);

    return 0;
}