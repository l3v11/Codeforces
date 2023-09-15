#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define ll long long
#define mod 1000000007

int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        ll n;
        scanf("%lld", &n);

        ll ans = n * (n - 1);
        ans %= mod;

        for (int i = 1; i <= n; i++) {
            ans *= i;
            ans %= mod;
        }

        printf("%lld\n", ans);
    }

    return 0;
}