#include <stdio.h>
#include <stdlib.h>

#define ll long long

int check(ll i) {
    int mn = 9, mx = 0;
    while (i) {
        int d = i % 10;
        i /= 10;
        mn = (mn < d) ? mn : d;
        mx = (mx > d) ? mx : d;
    }

    return (mx - mn);
}

int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        ll l, r;
        scanf("%lld %lld", &l, &r);

        ll res = l, val = 0;
        for (ll i = l; i <= r && i <= l + 200; i++) {
            int test = check(i);
            if (test > val) {
                val = test;
                res = i;
            }
        }

        printf("%lld\n", res);
    }

    return 0;
}