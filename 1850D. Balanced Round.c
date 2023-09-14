#include <stdio.h>
#include <stdlib.h>

#define ll long long

int compare(const void *a, const void *b) {
    return (*(long *)a - *(long *)b);
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        ll n, k;
        scanf("%lld %lld", &n, &k);

        ll arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%lld", &arr[i]);
        }

        qsort(arr, n, sizeof(long long), compare);

        int cnt = 1, ans = 1;
        for (int i = 1; i < n; i++) {
            if ((arr[i] - arr[i - 1]) > k) {
                cnt = 1;
            } else {
                cnt++;
            }

            ans = max(ans, cnt);
        }

        printf("%d\n", n - ans);
    }

    return 0;
}