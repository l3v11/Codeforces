#include <stdio.h>
#include <stdlib.h>

#define ll long long

int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        int n, m, k, vh;
        scanf("%d %d %d %d", &n, &m, &k, &vh);

        int h[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &h[i]);
        }

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            int diff = abs(vh - h[i]);
            for (int j = 1; j < m; j++) {
                if (diff == (k * j)) {
                    cnt++;
                }
            }
        }

        printf("%d\n", cnt);
    }

    return 0;
}