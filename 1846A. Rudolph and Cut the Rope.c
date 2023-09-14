#include <stdio.h>
#include <stdlib.h>

#define ll long long

int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        int n;
        scanf("%d", &n);

        int a, b, cnt = 0;
        while (n--) {
            scanf("%d %d", &a, &b);

            if (a > b) {
                cnt++;
            }
        }

        printf("%d\n", cnt);
    }

    return 0;
}