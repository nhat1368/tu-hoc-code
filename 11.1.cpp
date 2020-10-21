#include <stdio.h>
#include <math.h>

int main() {
	
	int A, B; 
	scanf("%d", &A);
	scanf("%d", &B); 
	if (A != B) {
		if (A > B) {
			B = A;  
		}
		else {
			A = B;
		}
	}
	else {
		A = 0;
		B = 0; 
	}
	printf("A = %d \nB = %d", A, B); 
	return 0;
} 
