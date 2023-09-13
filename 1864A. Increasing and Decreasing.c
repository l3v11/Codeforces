#include <stdio.h>
#include <stdlib.h>

#define ll long long

int main() {

    int tc;
    scanf("%d", &tc);

    while (tc--) {
        int x, y, n;
        scanf("%d %d %d", &x, &y, &n);

        int arr[n];
        arr[0] = x;
        arr[n-1] = y;
        int cnt = 1;

        for (int i = n - 2; i >= 1; i--) {
            arr[i] = arr[i + 1] - cnt;
            cnt++;
        }

        if ((arr[1] - arr[0]) > (arr[2] - arr[1])) {
            for (int i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
        } else {
            printf("-1");
        }

        printf("\n");
    }

    return 0;
}