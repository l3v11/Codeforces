#include <stdio.h>
#include <stdlib.h>

#define ll long long

struct pair {
    ll first;
    ll second;
};

int compare(const void *a, const void *b) {
    return ((struct pair *)a)->first - ((struct pair *)b)->first;
}

int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        ll n, k;
        scanf("%lld %lld", &n, &k);

        struct pair a[n];
        for (ll i = 0; i < n; i++) {
            scanf("%lld", &a[i].first);
            a[i].second = i;
        }

        ll b[n];
        for (ll i = 0; i < n; i++) {
            scanf("%lld", &b[i]);
        }

        qsort(a, n, sizeof(struct pair), compare);
        qsort(b, n, sizeof(ll), compare);

        ll ans[n];
        for (ll i = 0; i < n; i++) {
            ans[a[i].second] = b[i];
        }

        for (ll i = 0; i < n; i++) {
            printf("%lld ", ans[i]);
        }

        printf("\n");
    }

    return 0;
}