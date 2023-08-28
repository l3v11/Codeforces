#include <stdio.h>
#include <stdlib.h>

int min (int a, int b, int c) {

    int min_val = a;
    if (b < min_val) {
        min_val = b;
    }
    if (c < min_val) {
        min_val = c;
    }

    return min_val;
}

int main() {

    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

    int drink = (k * l) / nl;
    int limes = c * d;
    int salt = p / np;
    int toasts = min(drink, limes, salt) / n;

    printf("%d\n", toasts);

    return 0;
}