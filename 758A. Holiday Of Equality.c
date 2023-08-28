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

    int a[tc];
    for (int i=0; i<tc; i++) {
        scanf("%d", &a[i]);
    }

    sort_array(a, tc);

    int sum=0;
    for (int i=0; i<tc; i++) {
        if (a[i] < a[tc-1]) {
            sum += a[tc-1] - a[i];
        }
    }

    printf("%d\n", sum);

    return 0;
}