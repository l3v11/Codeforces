#include <stdio.h>
#include <stdlib.h>

int main() {

    int tc, n;

    scanf("%d", &tc);

    while (tc--) {
        scanf("%d", &n);

        int arr[n], cur = 0;

        for (int i=1; i<=n; i+=2) {
            for (int j=i; j<=n; j*=2) {
                arr[cur] = j;
                cur++;
            }
        }

        for (int i=0; i<n; i++) {
            printf("%d ", arr[i]);
        }

        printf("\n");
    }

    return 0;
}