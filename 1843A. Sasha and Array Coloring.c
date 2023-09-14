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
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        qsort(a, n, sizeof(int), compare);

        int sum = 0;
        for (int i = 0; i < n / 2; i++) {
            sum += abs(a[i] - a[n - i - 1]);
        }

        printf("%d\n", sum);
    }

    return 0;
}