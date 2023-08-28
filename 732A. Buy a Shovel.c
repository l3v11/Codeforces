#include <stdio.h>
#include <stdlib.h>

int main() {

    int k, r, i=1;
    scanf("%d %d", &k, &r);

    while (1) {
        if (k*i % 10 == 0 || k*i % 10 == r) {
            printf("%d\n", i);
            break;
        }
        i++;
    }

    return 0;
}