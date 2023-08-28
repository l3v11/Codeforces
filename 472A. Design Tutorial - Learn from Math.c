#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("4 %d\n", n-4);
    } else {
        printf("%d 9\n", n-9);
    }

    return 0;
}