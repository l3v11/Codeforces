#include <stdio.h>
#include <stdlib.h>

#define ll long long

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        int b, c, h;
        scanf("%d %d %d", &b, &c, &h);

        printf("%d\n", min(b -1, c + h) * 2 + 1);
    }

    return 0;
}