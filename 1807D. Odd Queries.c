#include <stdio.h>
#include <stdlib.h>

#define ll long long

int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        ll n, q;
        scanf("%lld %lld", &n, &q);

        ll a[200005], sum = 0, pref[200005];
        for (int i = 1; i <= n; i++) {
            scanf("%lld", &a[i]);

            sum += a[i];
            pref[i] = pref[i - 1];
            pref[i] += a[i];
        }

        ll l, r, k;
        for (int i = 0; i < q; i++) {
            scanf("%lld %lld %lld", &l, &r, &k);

            ll ans = pref[n] - (pref[r] - pref[l - 1]) + k * (r - l + 1);

            if (ans % 2 == 1) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }

    return 0;
}