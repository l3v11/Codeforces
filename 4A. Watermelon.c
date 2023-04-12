#include <stdio.h>

int main() {

    int melon;

    scanf("%d", &melon);

    if (melon % 2 == 0 && melon > 2) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}