#include <stdio.h>
#include <stdlib.h>

int main () {
	int i, t, groups=0;
	
	scanf("%d", &t);
	
	int magnet[t];
	
	for (i=0; i<t; i++) {
		scanf("%d", &magnet[i]);
	}
	
	for (i=0; i<t; i++) {
		if (magnet[i] != magnet[i+1]) {
			groups++;
		}
	}
	
	printf("%d\n", groups);
	
	return 0;	
}