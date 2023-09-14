#include <stdio.h>
#include <stdlib.h>

#define ll long long

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        int n;
        scanf("%d", &n);

        char str[n + 1];
        scanf("%s", str);

        int ans = 0, cnt = 0;
        for (int i = 1; i < n; i++) {
            if (str[i] == str[i - 1]) {
                cnt++;
                ans = max(ans, cnt);
            } else {
                cnt = 0;
            }
        }

        printf("%d\n", ans + 2);
    }

    return 0;
}