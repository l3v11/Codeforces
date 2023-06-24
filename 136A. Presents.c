#include <stdio.h>
#include <stdlib.h>

int main () {
	int i, t, friend_index;
	
	scanf("%d", &t);
	
	int friend_gift[t];
	
	for (i=1; i<=t; i++) {
		scanf("%d", &friend_index);
		
		friend_gift[friend_index-1] = i;
	}
	
	for (i=0; i<t; i++) {
		printf("%d ", friend_gift[i]);
	}
	
	printf("\n");
	
	return 0;
}