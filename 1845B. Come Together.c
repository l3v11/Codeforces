#include <stdio.h>
#include <stdlib.h>

#define ll long long

int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        ll x[3], y[3];

        for (int i = 0; i < 3; i++) {
            scanf("%lld %lld", &x[i], &y[i]);
        }

        ll a = abs(x[0] - x[1])+abs(y[0] - y[1]);
        ll b = abs(x[0] - x[2])+abs(y[0] - y[2]);
        ll c = abs(x[1] - x[2])+abs(y[1] - y[2]);

        printf("%lld\n", (a + b - c) / 2 + 1);
    }

    return 0;
}