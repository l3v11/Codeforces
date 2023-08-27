#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, j, tc, n;

    scanf("%d", &tc);

    while (tc--) {
        scanf("%d", &n);

        long int arr[n];

        for (i=0; i<n; i++) {
            scanf("%ld", &arr[i]);
        }

        // Sorting the input array a.
        for (i=0; i<n; i++) {
            for (j=i; j<n; j++) {
                if (arr[i] > arr[j]) {
                    int tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                }
            }
        }

        if (arr[n-1] == arr[0]) {
            printf("-1\n");
        } else {
            int bc = 0;

            while (arr[bc] == arr[0]) {
                bc++;
            }

            printf("%d %d\n", bc, n-bc);

            for (i=0; i<bc; i++) {
                printf("%d ", arr[i]);
            }

            printf("\n");

            for (i=bc; i<n; i++) {
                printf("%d ", arr[i]);
            }

            printf("\n");
        }
    }

    return 0;
}