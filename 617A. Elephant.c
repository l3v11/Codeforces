#include <stdio.h>
#include <stdlib.h>

int main() {

    int pos_forward[] = {5, 4, 3, 2, 1};
    int dest, steps=0;

    scanf("%d", &dest);

    for (int i=0; i<5; i++) {
        steps += dest / pos_forward[i];
        dest %= pos_forward[i];
    }

    printf("%d\n", steps);

    return 0;
}