#include <stdio.h>
#include <stdlib.h>

#define ll long long

int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        char n[10];
        scanf("%s", n);

        for (int i = 0; i < 9; i++) {
            if (n[i] == '1') {
                printf("13\n");
                break;
            }
            if (n[i] == '3') {
                printf("31\n");
                break;
            }
        }
    }

    return 0;
}