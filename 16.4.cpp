#include <stdio.h> 
int main() {
	int A[10000]; 
	int N, i; 
	printf("Enter N=");
	scanf("%d", &N); 
	for (i = 0; i < N; i++) {
	printf("A[%d]=",i+1);
	scanf("%d", &A[i]); 
	
	}
	
	for (i = 0; i < N; i++) {
	    printf("%d, ",A[i]);
		printf("%d, ", A[N - 1 - i]); 
	}
	return 0;
}
