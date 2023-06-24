#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, r=0, g=0, b=0;


    scanf("%d", &n);

    char stones[n];
    scanf("%s", stones);

    for (int i=0; i<n; i++) {
        if (stones[i] == 'R') while (stones[i+1] == 'R') {
            r++;
            i++;
        }
        if (stones[i] == 'G') while (stones[i+1] == 'G') {
            g++;
            i++;
        }
        if (stones[i] == 'B') while (stones[i+1] == 'B') {
            b++;
            i++;
        }
    }

    printf("%d\n", r+g+b);

    return 0;
}