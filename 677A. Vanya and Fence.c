#include <stdio.h>
#include <stdlib.h>

int main() {

    int t, h, height_of_person, width=0;

    scanf("%d %d", &t, &h);

    while (t--) {
        scanf("%d", &height_of_person);

        if (height_of_person <= h) {
            width++;
        } else {
            width += 2;
        }
    }

    printf("%d\n", width);

    return 0;
}