#include <stdio.h>
#include <stdlib.h>

int main() {

    int tc;

    scanf("%d", &tc);

    int scr[tc];

    for (int i=0; i<tc; i++) {
        scanf("%d", &scr[i]);
    }

    int cnt=0, best=scr[0], worst=scr[0];

    for (int i=0; i<tc; i++) {
        if (scr[i] > best) {
            best = scr[i];
            cnt++;
        } else if (scr[i] < worst) {
            worst = scr[i];
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}