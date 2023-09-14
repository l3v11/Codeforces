#include <stdio.h>
#include <stdlib.h>

#define ll long long

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        int n, k;
        scanf("%d %d", &n, &k);

        int arr1[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr1[i]);
        }

        int arr2[n - 1];
        for (int i = 1; i < n; i++) {
            arr2[i - 1] = abs(arr1[i] - arr1[i - 1]);
        }

        qsort(arr2, n - 1, sizeof(int), compare);

        int ans = 0;
        for (int i = 0; i < n - k; i++) {
            ans += arr2[i];
        }

        printf("%d\n", ans);
    }

    return 0;
}