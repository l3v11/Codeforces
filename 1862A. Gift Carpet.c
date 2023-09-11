#include <stdio.h>
#include <stdlib.h>

int main() {

    int tc, n, m;

    scanf("%d", &tc);

    while (tc--) {
        scanf("%d %d", &n, &m);

        char arr[n][m];
        for (int i=0; i<n; i++) {
            scanf("%s", arr[i]);
        }

        char vk[5] = "vika";
        int cnt=0;
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (arr[j][i] == vk[cnt]) {
                    cnt++;
                    break;
                }
            }
        }

        if (cnt == 4) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    

    return 0;
}