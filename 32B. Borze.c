#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char str[201], str_out[201];
    scanf("%s", str);

    for (int i=0; i<strlen(str); i++) {
        if (str[i] == '.') {
            strcat(str_out, "0");
        }
        if (str[i] == '-' && str[i+1] == '.') {
            strcat(str_out, "1");
            i++;
        }
        if (str[i] == '-' && str[i+1] == '-') {
            strcat(str_out, "2");
            i++;
        }
    }

    printf("%s\n", str_out);

    return 0;
}