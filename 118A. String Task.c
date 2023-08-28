#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

    char str[101];
    scanf("%s", str);

    for (int i=0; i<strlen(str); i++) {
        str[i] = tolower(str[i]);
        if (str[i] == 'a' || str[i] == 'o' || str[i] == 'y' || str[i] == 'e' || str[i] == 'u' || str[i] == 'i') {
            continue;
        } else {
            printf(".%c", str[i]);
        }
    }

    printf("\n");

    return 0;
}