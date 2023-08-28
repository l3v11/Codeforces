#include <stdio.h>
#include <stdlib.h>

int main() {

    int tc;
    scanf("%d", &tc);

    while (tc--) {
        int a, b;
        scanf("%d %d", &a, &b);

        int sub = abs(a - b);

        if (sub % 10 == 0) {
            printf("%d\n", sub / 10);
        } else {
            printf("%d\n", (sub / 10) + 1);
        }
    }

    return 0;
}