#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort_letter (char r_letter[101], int len_str) {
    for (int i=0; i<len_str; i++) {
        for (int j=i+1; j<len_str; j++) {
            if (r_letter[i] > r_letter[j]) {
                char tmp = r_letter[i];
                r_letter[i] = r_letter[j];
                r_letter[j] = tmp;
            }
        }
    }
}

int main() {

    char g_name[101], r_host[101], c_letter[101], s_letter[101];

    scanf("%[^\n]%*c", g_name);
    scanf("%[^\n]%*c", r_host);
    scanf("%[^\n]%*c", s_letter);

    strcat(strcpy(c_letter, g_name), r_host);

    sort_letter(c_letter, strlen(c_letter));
    sort_letter(s_letter, strlen(s_letter));

    if (strcmp(s_letter, c_letter) == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}