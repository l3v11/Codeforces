#include <stdio.h>

int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        int n, k, x;
        scanf("%d %d %d", &n, &k, &x);

        if (x != 1) {
            printf("YES\n");
            printf("%d\n", n);

            for (int i = 0; i < n; i++) {
                printf("1 ");
            }

            printf("\n");
        } else if (k == 1 || (k == 2 && n % 2 == 1)) {
            printf("NO\n");
        } else {
            printf("YES\n");
            printf("%d\n", n / 2);
            printf("%d", (n % 2 == 1) ? 3 : 2);

            for (int i = 1; i < n / 2; i++) {
                printf(" 2");
            }
            printf("\n");
        }
    }

    return 0;
}
