#include <stdio.h>
#include <stdlib.h>

#define ll long long

int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        int n, k;
        scanf("%d %d", &n, &k);

        int l, r, chkl = 0, chkr = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d %d", &l, &r);

            if (l == k) chkl = 1;
            if (r == k) chkr = 1;
        }

        printf((chkl && chkr) ? "YES\n" : "NO\n");
    }

    return 0;
}