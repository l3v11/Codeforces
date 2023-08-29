#include <stdio.h>
#include <stdlib.h>

int main() {

	int tc;
	scanf("%d", &tc);

	while (tc--) {
		int n;
		scanf("%d", &n);

		int p[n];
		for (int i=0; i<n; i++) {
			scanf("%d", &p[i]);
		}

		int cnt=0;
		for (int i=0; i<=n; i++) {
			if (p[i] == i+1) {
				cnt++;
			}
		}

		printf("%d\n", (cnt + 1) / 2);
	}

	return 0;
}
