#include <stdio.h>
 
int main() {
    int tc;
    scanf("%d", &tc);
 
    while (tc--) {
        int n;
        scanf("%d", &n);
 
        if (n == 1) {
            printf("1\n");
        } else if (n % 2) {
            printf("-1\n");
        } else {
            int a[n];
            for (int i = 0; i < n; i++) {
                a[i] = i + 1;
            }
 
            for (int i = 0; i < n; i += 2) {
                int tmp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = tmp;
            }
 
            for (int i = 0; i < n; i++) {
                printf("%d ", a[i]);
            }
 
            printf("\n");
        }
    }
 
    return 0;
}