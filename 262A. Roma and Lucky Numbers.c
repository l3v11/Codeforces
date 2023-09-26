#include <stdio.h>

int main() {

    int x, y, num, count=0;

    scanf("%d %d", &x, &y);

    for (int i=0; i<x; i++) {

        scanf("%d", &num);

        int luckyCount=0;

        while (num > 0) {
            if (num % 10 == 4 || num % 10 == 7) {
                luckyCount++;
            }
            num /= 10;
        }

        if (luckyCount <= y) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}