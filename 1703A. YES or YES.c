#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

    int tc;
    scanf("%d", &tc);

    char str[4];
    while (tc--) {
        scanf("%s", str);

        for (int i=0; i<strlen(str); i++) {
            str[i] = tolower(str[i]);
        }

        if ((strcmp(str, "yes") == 0)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}