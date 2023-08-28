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

    int x[3];
    scanf("%d %d %d", &x[0], &x[1], &x[2]);

    sort_array(x, 3);

    printf("%d\n", x[2] - x[0]);

    return 0;
}