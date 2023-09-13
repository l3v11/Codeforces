#include <stdio.h>
#include <stdlib.h>

#define ll long long

int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        char arr[64];
        int ind = 0;
        for (int r = 0; r < 8; r++) {
            char ch[9];
            scanf ("%s", ch);

            for (int c = 0; c < 8; c++) {
                if (ch[c] != '.') {
                    arr[ind++] = ch[c];
                }
            }
        }

        arr[ind] = '\0';

        printf("%s\n", arr);
    }

    return 0;
}