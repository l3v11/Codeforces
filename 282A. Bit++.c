#include <stdio.h>
#include <stdlib.h>

int main() {

    int t, finalValue=0;
    char x[4];

    scanf("%d", &t);

    for (int i=0; i<t; i++) {
        scanf("%s", x);

        if (x[1] == '+') {
            finalValue++;
        } else if (x[1] == '-') {
            finalValue--;
        }
    }

    printf("%d\n", finalValue);

    return 0;
}