#include <stdio.h>
#include <stdlib.h>

void sort_array(int arr[], int size) {
    for (int i=0; i<size; i++) {
        for (int j=i+1; j<size; j++) {
            if (arr[i] > arr[j]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

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

        sort_array(a, n);

        int chk = 1;
        for (int i=0; i<n-1; i++) {
            if (a[i+1] - a[i] > 1) {
                chk = 0;
            }
        }

        if (chk) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}