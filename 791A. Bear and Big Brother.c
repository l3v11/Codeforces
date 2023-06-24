#include <stdio.h>
#include <stdlib.h>

int main() {

    int limak, bob, count=0;

    scanf("%d %d", &limak, &bob);

    do {
        limak *= 3;
        bob *= 2;
        count++;
    } while (limak <= bob);

    printf("%d", count);

    return 0;
}