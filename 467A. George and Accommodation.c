#include <stdio.h>
#include <stdlib.h>

int main() {

    int t, people_living, capacity, count=0;

    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &people_living, &capacity);

        if ( (capacity - people_living) >= 2 ) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}