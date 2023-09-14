#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ll long long

int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        char a[5001], b[5001];
        scanf("%s %s", a, b);

        int chk = 0;
        for (int i = 0; i < strlen(a); i++) {
            if (a[i] == '0' &&  a[i + 1] == '1' && b[i] == '0' &&  b[i + 1] == '1') {
                chk = 1;
                break;
            }
        }

        printf(chk ? "YES\n" : "NO\n");
    }

    return 0;
}