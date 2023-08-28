#include <stdio.h>
#include <stdlib.h>

int main() {

    int tc;
    scanf("%d", &tc);

    while (tc--) {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }

        for (int i=0; i<n-1; i++) {
            if (a[i] != a[i+1]) {
                if (i == 0 && a[i] != a[i+2]) {
                    printf("%d\n", i + 1);
                    break;
                }
                printf("%d\n", i + 2);
                break;
            }
        }
    }

    return 0;
}