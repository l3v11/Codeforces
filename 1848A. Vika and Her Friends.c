#include <stdio.h>
#include <stdlib.h>

#define ll long long

int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        int n, m, k;
        scanf("%d %d %d", &n, &m, &k);

        int x, y;
        scanf("%d %d", &x, &y);

        int xx, yy, chk = 1;
        for (int i = 0; i < k; i++) {
            scanf("%d %d", &xx, &yy);

            if ((x + y) % 2 == (xx + yy) % 2) {
                chk = 0;
            }
        }

        printf(chk ? "YES\n" : "NO\n");
    }

    return 0;
}