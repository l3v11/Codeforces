#include <stdio.h>
#include <stdlib.h>

#define ll long long

int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        int n;
        scanf("%d", &n);

        ll a[n];
        for (int i = 0; i < n; i++) {
            scanf("%lld", &a[i]);
        }

        for (int i = 0; i < n; i++) {
            if (a[i] == 1) {
                a[i]++;
            }
        }

        for (int i = 1; i < n; i++) {
            if (a[i] % a[i - 1] == 0) {
                a[i]++;
            }
        }

        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        
        printf("\n");
    }

    return 0;
}