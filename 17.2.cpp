
#include <stdio.h>

int main() {
	
	int N, d, i = 0, l; 
	int a[10000] = {}; 
	printf("Enter N= \n");
	scanf("%d", &N); 
	
	for (i = 0; i < N; i++) {
		printf("a[%d]=",i+1);
		scanf("%d", &a[i]); 
	} 
	for (i = 0; i <= N - 3 ; i++) {
	d = a[i+1] - a[i];
	l = a[i+2] - a[i+1]; 
	if (d != l)	 {
		printf("0"); 
		l = 0;
		break;
	}
	}
	if (l != 0) {
		printf("Addition error = %d", l); 
	}
	return 0;
}
