#include <stdio.h>
#include <stdlib.h>

int main() {

    int tc, n, pol=0, crm=0;

    scanf("%d", &tc);

    while (tc--) {
        scanf("%d", &n);

        if (n == -1) {
            if (pol > 0) {
                pol--;
            } else {
                crm++;
            }
        } else {
            pol += n;
        }
    }

    printf("%d\n", crm);

    return 0;
}