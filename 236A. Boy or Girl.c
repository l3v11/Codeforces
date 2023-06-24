#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char word[101], tmp;
    int i, j, count=0;

    scanf("%s", word);

    int lenStr = strlen(word);

    for (i=0; i<lenStr; i++) {
        for (j=i+1; j<lenStr; j++) {
            if (word[i] > word[j]) {
                tmp = word[i];
                word[i] = word[j];
                word[j] = tmp;
            }
        }
    }

    for (i=0; i<lenStr; i++) {
        if (word[i] != word[i+1]) {
            count++;
        }

    }

    if (count %2 == 0) {
        printf("CHAT WITH HER!\n");
    } else {
        printf("IGNORE HIM!\n");
    }

    return 0;
}