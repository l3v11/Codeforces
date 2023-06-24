#include <stdio.h>
#include <stdlib.h>

int main() {

    long long n;
    int luckyCount=0;

    scanf("%lld", &n);

    while (n > 0) {
        if (n % 10 == 4 || n % 10 == 7) {
            luckyCount++;
        }
        n /= 10;
    }

    if (luckyCount==4 || luckyCount==7) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}