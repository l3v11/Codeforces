#include <stdio.h>
#include <string.h>

int main () {
	char a[101], b[101];
	
	scanf("%s\n%s", a, b);
	
	for (int i=0; i<strlen(a); i++) {
		if (a[i] != b[i]) {
			printf("1");
		} else {
			printf("0");
		}
	}
	
	return 0;	
}