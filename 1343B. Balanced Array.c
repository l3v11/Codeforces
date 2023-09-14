#include <stdio.h>
#include <stdlib.h>

#define ll long long

int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        int n;
        scanf("%d", &n);

        ll sum1 = 0, sum2 = 0;
        if (n % 4 == 0) {
            printf("YES\n");

            for (ll i = 2; i <= n; i += 2) {
                printf("%lld ", i);
                sum1 += i;
            }

            for (ll i = 1; i < n - 1; i += 2) {
                printf("%lld ", i);
                sum2 += i;
            }

            printf("%lld\n", sum1 - sum2);
        } else {
            printf("NO\n");
        }
    }

    return 0;
}