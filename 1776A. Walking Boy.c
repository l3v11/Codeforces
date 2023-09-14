#include <stdio.h>
#include <stdlib.h>

#define ll long long

int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        int n;
        scanf("%d", &n);

        int prev = 0, cnt = 0;
        while (n--) {
            int a;
            scanf("%d", &a);

            cnt += (a - prev) / 120;
            prev = a;
        }

        cnt += (1440 - prev) / 120;

        printf(cnt >= 2 ? "YES\n" : "NO\n");
    }

    return 0;
}