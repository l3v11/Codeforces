#include <stdio.h>
#include <stdlib.h>

int main() {

    int t, a, b, total=0, cap=0;

    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &a, &b);

        total -= a;
        total += b;

        if (total > cap) {
            cap = total;
        }
    }

    printf("%d\n", cap);

    return 0;
}