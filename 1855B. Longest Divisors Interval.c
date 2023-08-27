#include <stdio.h>
#include <stdlib.h>

int main() {

    int tc;

    scanf("%d", &tc);

    while (tc--) {
        long long n;
        scanf("%lld", &n);

        int count=1;

        for (int i=2; n%i==0 && i<=n; i++) {
            count++;
        }

        printf("%d\n", count);
    }

    return 0;
}