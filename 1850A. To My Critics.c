#include <stdio.h>
#include <stdlib.h>

#define ll long long

int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        int chk = 0;
        if (a + b >= 10 || a + c >= 10 || b + c >= 10) {
            chk = 1;
        }

        printf(chk ? "YES\n" : "NO\n");
    }

    return 0;
}