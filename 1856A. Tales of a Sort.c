#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {

    int tc;
    scanf("%d", &tc);

    while (tc--) {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i=0; i<n; i++) {
            scanf("%d", &arr[i]);
        }

        int ans = 0;
        for (int i=0; i<n-1; i++) {
            if (arr[i] > arr[i+1]) {
                ans = max(ans, arr[i]);
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}