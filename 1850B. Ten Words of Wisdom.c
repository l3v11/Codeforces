#include <stdio.h>
#include <stdlib.h>

#define ll long long

int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        int n;
        scanf("%d", &n);

        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            scanf("%d %d", &a[i], &b[i]);
        }

        int ans = 0, best = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] <= 10 && b[i] > best) {
                best = b[i];
                ans = i;
            }
        }

        printf("%d\n", ans + 1);
    }

    return 0;
}