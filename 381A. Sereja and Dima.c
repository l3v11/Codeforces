#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    int card[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &card[i]);
    }

    int s=0, d=0, left=0, right=n-1, turn=0;
    while (n > 0) {
        if (turn % 2 == 0) {
            if (card[left] > card[right]) {
                s += card[left];
                left++;
            } else {
                s += card[right];
                right--;
            }
        } else {
            if (card[left] > card[right]) {
                d += card[left];
                left++;
            } else {
                d += card[right];
                right--;
            }
        }
        turn++;
        n--;
    }

    printf("%d %d\n", s, d);

    return 0;
}