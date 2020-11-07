#include <stdio.h>

int main() {

	int N, i, j, c, b; 
	int a[1000];
	printf("Enter N= ");
	scanf("%d", &N); 
	
	for (i = 0; i < N; i++){
		printf("a[%d]=",i);
		scanf("%d", &a[i]); 
	}
	for(i = 0; i < N-1; i++) {
		for(j = 1; j < N; j++) {
			if ((a[i] == a[j]) && (i != j)) {
				c = i;
				b = j; 
		}
	
	}
}
	printf ("%d and %d", c, b); 
}
