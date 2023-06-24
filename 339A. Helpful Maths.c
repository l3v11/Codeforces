#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char str[101], tmp;

    scanf("%s", str);

    for (int i=0; i<strlen(str); i+=2) {
        for (int j=i+2; j<strlen(str); j+=2) {
            if (str[i] > str[j]) {
                tmp = str[i];
                str[i] = str[j];
                str[j] = tmp;
            }
        }
    }

    printf("%s\n", str);

    return 0;
}