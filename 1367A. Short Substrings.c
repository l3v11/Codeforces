#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int n;
    scanf("%d", &n);

    char str[1001];
    while (n--) {
        scanf("%s", str);

        for (int i=0; i<strlen(str); i+=2) {
            printf("%c", str[i]);
        }
        printf("%c\n", str[strlen(str) - 1]);
    }

    return 0;
}