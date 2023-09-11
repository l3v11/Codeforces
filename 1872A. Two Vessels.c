#include <stdio.h>
#include <stdlib.h>

int main() {

    int tc;
    scanf("%d", &tc);

    while (tc--) {
        int a, b, c, count=0;
        scanf("%d %d %d", &a, &b, &c);

        int result = (abs(a - b) + 2 * c - 1) / (2 * c);
        printf("%d\n", result);
    }

    return 0;
}