#include <stdio.h>
#include <stdlib.h>

int main() {

    int year, y1, y2, y3, y4;

    scanf("%d", &year);

    while (1) {
        year += 1;
        y1 = year / 1000;
        y2 = (year / 100) % 10;
        y3 = (year / 10) % 10;
        y4 = year % 10;

        if ( y1!=y2 && y1!=y3 && y1!=y4 && y2!=y3 && y2!=y4 && y3!=y4 ) {
            break;
        }
    }

    printf("%d%d%d%d\n", y1, y2, y3, y4);

    return 0;
}