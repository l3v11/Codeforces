#include <stdio.h>
#include <stdlib.h>

#define ll long long

int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        int n, k;
        scanf("%d %d", &n, &k);

        int p[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &p[i]);
            p[i]--;
        }

        int bad = 0;
        for (int i = 0; i < n; i++) {
            if (p[i] % k != i % k) bad++;
        }

        if (bad == 0) printf("0\n");
        else if (bad == 2) printf("1\n");
        else printf("-1\n");
    }

    return 0;
}