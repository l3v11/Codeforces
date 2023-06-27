#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    int t;
    int alph[26] = {0};
    char str[101];

    scanf("%d", &t);
    scanf("%s", str);

    for (int i=0; i<t; i++) {
        alph[tolower(str[i]) - 'a'] = 1;
    }

    for (int i=0; i<26; i++) {
        if (alph[i] == 0) {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");

    return 0;
}