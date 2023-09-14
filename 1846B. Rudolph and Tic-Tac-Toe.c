#include <stdio.h>
#include <stdlib.h>

#define ll long long

int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        char v[3][4];
        for (int i = 0; i < 3; i++) {
            scanf("%s", v[i]);
        }

        char ans;
        int chk = 0;

        for (int i = 0; i < 3; i++) {
            if (v[i][0] == v[i][1] && v[i][1] == v[i][2] && v[i][0] != '.') {
                ans = v[i][0];
                chk = 1;
            }

            if (v[0][i] == v[1][i] && v[1][i] == v[2][i] && v[0][i] != '.') {
                ans = v[0][i];
                chk = 1;
            }
        }
        
        if (v[0][0] == v[1][1] && v[1][1] == v[2][2] && v[0][0] != '.') {
            ans = v[0][0];
            chk = 1;
        }

        if (v[0][2] == v[1][1] && v[1][1] == v[2][0] && v[0][2] != '.') {
            ans = v[0][2];
            chk = 1;
        }

        if (chk) {
            printf("%c\n", ans);
        } else {
            printf("DRAW\n");
        }
    }

    return 0;
}