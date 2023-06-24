#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char* str) {
    int len = strlen(str);
    for (int i=0; i<len/2; i++) {
        char tmp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = tmp;
    }
}

int main() {

    char word1[101], word2[101], rev_word2[101];

    scanf("%s\n%s", word1, word2);

    strcpy(rev_word2, word2);
    reverse(rev_word2);

    if ( strcmp(word1, rev_word2) == 0 ) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}