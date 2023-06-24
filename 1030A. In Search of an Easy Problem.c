#include <stdio.h>
#include <stdlib.h>

int main() {

    int t, resp, sum=0;

    scanf("%d", &t);

    while (t--) {
        scanf("%d", &resp);

        sum += resp;
    }

    if (sum >= 1) {
        printf("HARD\n");
    } else if (sum == 0) {
        printf("EASY\n");
    }

    return 0;
}