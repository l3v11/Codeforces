#include <stdio.h>
#include <stdlib.h>

int main() {

    int tc;

    scanf("%d", &tc);

    while (tc--) {
        int a, b, c;

        scanf("%d %d %d", &a, &b, &c);

        if (c%2 == 0) {
            if (a > b) {
                printf("First\n");
            } else {
                printf("Second\n");
            }
        } else {
            if (a >= b) {
                printf("First\n");
            } else {
                printf("Second\n");
            }
        }
    }

    return 0;
}