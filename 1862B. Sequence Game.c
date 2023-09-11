#include <stdio.h>
#include <stdlib.h>

int main() {

    int tc;
    scanf("%d", &tc);
    
    while (tc--) {
        int n;
        scanf("%d", &n);
        int b[n];
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }
        
        int a[n * 2];
        int ind = 0;
        a[ind++] = b[0];
        for (int i = 1; i < n; i++) {
            if (b[i-1] > b[i]) {
                a[ind++] = b[i];
                a[ind++] = b[i];
            } else {
                a[ind++] = b[i];
            }
        }
        
        int k = ind;
        printf("%d\n", k);
        
        for (int i = 0; i < k; i++) {
            printf("%d ", a[i]);
        }
        
        printf("\n");
    }
    
    return 0;
}
