#include <stdio.h>
#include <stdlib.h>

#define ll long long

int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        ll n;
        scanf("%lld", &n);

        ll a[n];
        for (ll i = 0; i < n; i++) {
            scanf("%lld", &a[i]);
        }

        ll chk = 0, sum = 0, cnt = 0;
        for (ll i = 0; i < n; i++) {
            sum += abs(a[i]);

            if (a[i] < 0 && !chk) {
                chk = 1;
                cnt++;
            } else if (a[i] > 0) chk = 0;
        }

        printf("%lld %lld\n", sum, cnt);
    }

    return 0;
}