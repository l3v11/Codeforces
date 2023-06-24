#include <stdio.h>
#include <stdlib.h>

int main() {

    int cost_of_first_banana, has_dollars, num_of_banana;
    int total_cost=0;

    scanf("%d %d %d", &cost_of_first_banana, &has_dollars, &num_of_banana);

    for (int i=1; i<=num_of_banana; i++) {
        total_cost += cost_of_first_banana * i;
    }

    if (has_dollars < total_cost) {
        printf("%d\n", total_cost - has_dollars);
    } else {
        printf("0\n");
    }

    

    return 0;
}