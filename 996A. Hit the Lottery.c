#include <stdio.h>
#include <stdlib.h>

int main() {

    long int n;
    int dollar[5] = {100, 20, 10, 5, 1};
    int min_n_bills = 0;

    scanf("%ld", &n);

    for (int i=0; i<5; i++) {
        min_n_bills += n / dollar[i];
        n %= dollar[i];
    }

    printf("%d\n", min_n_bills);

    return 0;
}