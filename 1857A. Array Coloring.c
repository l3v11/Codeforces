#include <stdio.h>
#include <stdlib.h>

int main() {

    int tc, n;

    scanf("%d", &tc);

    while (tc--) {
        scanf("%d", &n);

        int arr[n], count=0;

        for (int i=0; i<n; i++) {
            scanf("%d", &arr[i]);
            if (arr[i]%2 != 0) {
                count++;
            }
        }

        if (count%2 == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}