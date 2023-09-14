#include <stdio.h>
#include <stdlib.h>

#define ll long long

int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        int n;
        scanf("%d", &n);

        ll arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%lld", &arr[i]);
        }

        ll sum_a = 0, sum_1 = 0;
        for (int i = 0; i < n; i++) {
            sum_a += arr[i];

            if (arr[i] == 1) {
                sum_1++;
            }
        }

        if (sum_a >= sum_1 + n && n > 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}