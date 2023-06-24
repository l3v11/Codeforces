#include <stdio.h>

int main () {
	long int shoes[4];
	int i, j, count=0;
	
	for (i=0; i<4; i++) {
		scanf("%ld", &shoes[i]);
	}
	
	for (i=0; i<4; i++) {	
		for (int j=i+1; j<4; j++) {
			if (shoes[i] > shoes[j]) {		
				int tmp = shoes[i];
				shoes[i] = shoes[j];
				shoes[j] = tmp;
			}
		}
	}

	for (i=0; i<4; i++) {
		if (shoes[i] == shoes[i+1]) {
			count++;
		}
	}
	
	printf("%d\n", count);
	
	return 0;	
}