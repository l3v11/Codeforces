#include <stdio.h>
#include <stdlib.h>

int main() {

    int t, k, score[100], count=0;

    scanf("%d %d", &t, &k);

    for (int i=0; i<t; i++) {
        scanf("%d", &score[i]);
    }

    k = score[k-1];

    for (int i=0; i<t; i++) {
        if (score[i]>=k && score[i]>0) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}