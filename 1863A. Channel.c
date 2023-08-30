#include <stdio.h>
#include <stdlib.h>

int main() {

    int tc;
    scanf("%d", &tc);

    while (tc--) {
        int n, a, q;
        scanf("%d %d %d", &n, &a, &q);
        char str[q + 1];
        scanf("%s", str);

        int now1 = a;
        for (int i=0; i<q; i++) {
            if (str[i] == '+') {
                now1++;
            }
        }

        int chk = 0;
        int now2 = a;
        if (now2 == n) {
            chk = 1;
        }
        for (int i=0; i<q; i++) {
            if (str[i] == '+') {
                now2++;
            }
            if (str[i] == '-') {
                now2--;
            }
            if (now2 == n) {
            chk = 1;
            }
        }

        if (chk) {
            printf("YES\n");
            continue;
        }
        if (now1 >= n) {
            printf("MAYBE\n");
            continue;;
        }
        printf("NO\n");
    }

    return 0;
}