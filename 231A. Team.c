#include <stdio.h>
#include <stdlib.h>

int main() {

    int t, n1, n2, n3, count=0;

    scanf("%d", &t);

    for (int i=0; i<t; i++) {
        scanf("%d %d %d", &n1, &n2, &n3);

        if (n1+n2==2 || n2+n3==2 || n3+n1==2) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}