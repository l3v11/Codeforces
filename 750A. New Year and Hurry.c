#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, time_to_go, total=0, cnt=0;

    scanf("%d %d", &n, &time_to_go);

    int time = 240-time_to_go;

    for(int i = 1; i <= n; ++i) {
	    total += 5 * i;
        if (total > time) {
            break;
        }
        cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}