#include <stdio.h>
#include <stdlib.h>

#define ll long long

int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        int n;
        scanf("%d", &n);

        int a, sum = 0, chk = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a);

            if (a == 0) {
                sum++;
            } else if (a >= 2) {
                chk = 1;
            }
        }

        if (sum <= (n + 1) / 2) {
            printf("0\n");
        } else if (chk || sum == n) {
            printf("1\n");
        } else {
            printf("2\n");
        }
    }

    return 0;
}