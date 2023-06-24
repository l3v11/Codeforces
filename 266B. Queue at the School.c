#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, t;

    scanf("%d %d", &n, &t);

    char children[n+1];

    scanf("%s", children);

    while (t--) {
        for (int i=0; i<n-1; i++) {
            if ( children[i] == 'B' && children[i+1] == 'G' ) {
                children[i] = 'G';
                children[i+1] = 'B';
                i++;
            }
        }
    }

    printf("%s\n", children);

    return 0;
}