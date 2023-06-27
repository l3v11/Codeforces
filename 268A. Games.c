#include <stdio.h>
#include <stdlib.h>

int main() {

    int t, h[100], a[100], count=0;

    scanf("%d", &t);

    for (int i=0; i<t; i++) {
        scanf("%d %d", &h[i], &a[i]);
    }

    for (int i=0; i<t; i++) {
        for (int j=0; j<t; j++) {
            if (h[i] == a[j]) {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}

/*
i=0, j=0 100 42
i=0, j=1 100 100 +1
i=0, j=2 100 42
i=0, j=3 100 5

i=1, j=0 42 42 +1
i=1, j=1 42 100
i=1, j=2 42 42 +1
i=1, j=3 42 5

i=2, j=0 5 42
i=2, j=1 5 100
i=2, j=2 5 42
i=2, j=3 5 5 +1

i=3, j=0 100 42
i=3, j=1 100 100 +1
i=3, j=2 100 42
i=3, j=3 100 5
*/