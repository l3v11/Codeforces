#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

    char st1[101], st2[101];

    scanf("%s\n%s", st1, st2);

    int lenst1 = strlen(st1);

    for (int i=0; i<lenst1; i++) {
        st1[i] = tolower(st1[i]);
        st2[i] = tolower(st2[i]);
    }

    if ( strcmp(st1, st2) == 0) {
        printf("0\n");
    }

    for (int i=0; i<lenst1; i++) {
        if (st1[i] < st2[i]) {
            printf("-1\n");
            break;
        } else if (st1[i] > st2[i]) {
            printf("1\n");
            break;
        }
    }

    return 0;
}