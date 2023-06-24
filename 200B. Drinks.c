#include <stdio.h>

int main () {
	int t, frac, sum=0;
	
	scanf("%d", &t);
	
	for (int i=0; i<t; i++) {
		scanf("%d", &frac);
		
		sum += frac;
	}
	
	printf("%.12f\n", (double)sum / t);
	
	return 0;	
}