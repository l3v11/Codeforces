#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
 
#define ll long long
 
int main() {
    int tc;
    scanf("%d", &tc);
 
    while (tc--) {
        int n;
        scanf("%d", &n);
 
        if (n == 3) {
            printf("NO\n");
        } else {
            printf("YES\n");
 
            if (n % 2) {
                int a = (n / 2) - 1;
                int b = (-n / 2);
                for (int i = 0; i < n; i++) {
                    printf("%d ", (i % 2) ? b : a);
                }
            } else {
                for (int i = 0; i < n; i++) {
                    printf("%d ", 1 - 2 * (i % 2));
                }
            }
 
            printf("\n");
        }
    }
 
    return 0;
}