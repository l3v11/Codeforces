#include <stdio.h>
#include <stdlib.h>

void sort_level(int level_array[], int size) {
	for (int i=0; i<size; i++) {
		for (int j=i+1; j<size; j++) {
			if (level_array[i] > level_array[j]) {
				int tmp = level_array[i];
				level_array[i] = level_array[j];
				level_array[j] = tmp;
			}
		}
	}
}

int main () {
	int i, j, t, p, q, level[1000], count=0;
	
	scanf("%d", &t);

	scanf("%d", &p);
	
	for (i=0; i<p; i++) {
		scanf("%d", &level[i]);
	}
	
	scanf("%d", &q);
	
	for (i=p; i<(p+q); i++) {
		scanf("%d", &level[i]);
	}
	
	sort_level(level, p+q);
	
	for (i=0; i<(p+q); i++) {
		if (level[i] != level[i+1]) {
			count++;
		}
	}
	
	if (count == t) {
		printf("I become the guy.\n");
	} else {
		printf("Oh, my keyboard!\n");
	}
	
	return 0;	
}