#include <stdio.h>
#include <string.h>

int main() {

    int n;
    char word[101];

    scanf("%d", &n);

    while (n--) {
        scanf("%s", &word);
        
        int lenword = strlen(word);

        if (lenword > 10) {
            printf("%c%d%c\n", word[0], lenword - 2, word[lenword-1]);
        } else {
            printf("%s\n", word);
        }

    }

    return 0;
}