#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

    char word[101];
    int i, count_upper=0, count_lower=0;

    scanf("%s", word);

    for (i=0; i<strlen(word); i++) {
        if (isupper(word[i])) {
            count_upper++;
        } else {
            count_lower++;
        }        
    }

    for (i=0; i<strlen(word); i++) {
        if (count_upper > count_lower) {
            printf("%c", toupper(word[i]));
        } else {
            printf("%c", tolower(word[i]));
        }
    }

    printf("\n");

    return 0;
}