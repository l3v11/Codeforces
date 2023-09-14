#include <stdio.h>
#include <stdlib.h>

#define ll long long

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        int n;
        scanf("%d", &n);

        int p, res = 0;
        for (int i = 1; i <= n; i++) {
            scanf("%d", &p);

            res = gcd(res, abs(p - i));
        }

        printf("%d\n", res);
    }

    return 0;
}