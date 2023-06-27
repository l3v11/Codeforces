#include <stdio.h>
#include <stdlib.h>

int main() {

    char str_set[1001] = {'a'};
    int alph[26] = {0};
    int i, count = 0;

    scanf("%[^\n]%*c", str_set);

    for (i=0; str_set[i] != '\0'; i++) {
        alph[str_set[i] - 'a'] = 1;
    }

    for (i=0; i<26; i++) {
        count += alph[i];
    }

    printf("%d\n", count);

    return 0;
}