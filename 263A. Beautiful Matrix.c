#include <stdio.h>
#include <stdlib.h>

int main() {

    int x;

    for (int i=1; i<=5; i++) {
        for (int j=1; j<=5; j++) {
            scanf("%d", &x);

            if (x == 1) {
                printf("%d\n", abs(i-3) + abs(j-3));
            }
        }
    }

    return 0;
}