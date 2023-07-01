#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int t, count=0;
    char polyh[20];

    scanf("%d\n", &t);

    while (t--) {
        scanf("%[^\n]%*c", polyh);

        if (strcmp(polyh, "Tetrahedron") == 0) {
            count += 4;
        } else if (strcmp(polyh, "Cube") == 0) {
            count += 6;
        } else if (strcmp(polyh, "Octahedron") == 0) {
            count += 8;
        } else if (strcmp(polyh, "Dodecahedron") == 0) {
            count += 12;
        } else if (strcmp(polyh, "Icosahedron") == 0) {
            count += 20;
        }
    }

    printf("%d\n", count);

    return 0;
}