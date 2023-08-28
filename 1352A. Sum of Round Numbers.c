#include <stdio.h>
#include <stdlib.h>

int main() {

    int tc;
    scanf("%d", &tc);

    while (tc--) {
        int n;
        scanf("%d", &n);
        int ans[5];
        int pwr=1, cnt=0;

        while (n > 0) {
            if (n%10 > 0) {
                ans[cnt++] = (n%10) * pwr;
            }
            n /= 10;
            pwr *= 10;
        }

        printf("%d\n", cnt);
        for (int i=0; i<cnt; i++) {
            printf("%d ", ans[i]);
        }

        printf("\n");
    }

    return 0;
}