#include <stdio.h>
#include <stdlib.h>
#define ll long long int

int main() {

    int tc;
    scanf("%d", &tc);

    while (tc--) {
        int n;
        scanf("%d", &n);

        ll a[n];
        for (int i=0; i<n; i++) {
            scanf("%lld", &a[i]);
        }

        int chk=1;
        ll tmp, diff=1e9;
        for (int i=0; i<n-1; i++) {
            if (a[i] > a[i+1]) {
                chk = 0;
            }

            tmp = a[i+1] - a[i];
            if (tmp < diff) diff = tmp;
        }

        if (chk == 0) {
            printf("0\n");
        } else {
            printf("%lld\n", (diff + 2) / 2);
        }
    }

    return 0;
}