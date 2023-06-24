#include <stdio.h>
#include <stdlib.h>

int main() {

    int t, a=0, d=0;

    scanf("%d", &t);

    char str[t];

    scanf("%s", str);

    for (int i=0; i<t; i++) {
        if (str[i] == 'A') {
            a++;
        } else if (str[i] == 'D') {
            d++;
        }
    }

    if (a > d) {
        printf("Anton\n");
    } else if (a < d) {
        printf("Danik\n");
    } else {
        printf("Friendship\n");
    }

    return 0;
}