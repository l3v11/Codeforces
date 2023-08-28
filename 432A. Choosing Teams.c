#include <stdio.h>
#include <stdlib.h>

int main() {

    int tc, k;
    scanf("%d %d", &tc, &k);

    int a[tc];
    for (int i=0; i<tc; i++) {
        scanf("%d", &a[i]);
    }

    int cnt=0;
    for (int i=0; i<tc; i++) {
        if (5 - a[i] >= k) {
            cnt++;
        }
    }

    printf("%d\n", cnt / 3);

    return 0;
}