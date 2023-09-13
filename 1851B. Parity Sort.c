#include <stdio.h>
#include <stdlib.h>

#define ll long long

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++) {
        L[i] = arr[l + i];
    }

    for (j = 0; j < n2; j++) {
        R[j] = arr[m + 1 + j];
    }

    i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }

        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        int n;
        scanf("%d", &n);

        int arr1[n], arr2[n];

        for (int i=0; i<n; i++) {
            scanf("%d", &arr1[i]);

            arr2[i] = arr1[i];
        }

        mergeSort(arr2, 0, n - 1);

        int chk = 1;

        for (int i=0; i<n; i++) {
            if ((arr1[i] % 2) != (arr2[i]) % 2) {
                chk = 0;
                break;
            }
        }

        printf(chk ? "YES\n" : "NO\n");
    }

    return 0;
}