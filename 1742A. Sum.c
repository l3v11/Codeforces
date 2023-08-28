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
        int n[3];
        for (int i=0; i<3; i++) {
            scanf("%d", &n[i]);
        }

        sort_array(n, 3);

        if (n[0] + n[1] == n[2]) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}