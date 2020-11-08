
#include <stdio.h>
int main() {
	int a[10000];
	int n, i, z; 
	printf("Enter n=");
	scanf("%d", &n); 
	for (i = 0; i < n; i++) {
		printf("a[%d]=",i);
		scanf("%d", &a[i]);
		if (a[i] % 2 == 1) {
			z = a[i]; 
		}
	}
	for (i = 0; i < n; i++) {
		if (a[i] % 2 == 1) {
			a[i] = a[i] + z;
		}
		printf("%d\n", a[i]); 
	}
	return 0;
}
