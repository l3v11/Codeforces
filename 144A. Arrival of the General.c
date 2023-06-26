#include <stdio.h>
#include <stdlib.h>

int main() {
    int t, a;

    scanf("%d %d", &t, &a);

    int min_a = a, max_a = a, min_i = 0, max_i = 0;

    for (int i=1; i<t; i++) {
        scanf("%d", &a);

        if (a > max_a) {
            max_a = a;
            max_i = i;
        }

        if (a <= min_a) {
            min_a = a;
            min_i = i;
        }
    }

    printf("%d\n", max_i + (t - 1 - min_i) - (max_i > min_i ? 1 : 0));

    return 0;
}
