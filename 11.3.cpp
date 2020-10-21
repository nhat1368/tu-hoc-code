#include <stdio.h>
#include <math.h>

int main() 
{

	int A, B, C, R1, R2; 
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C); 
	R1 = abs(B - A);
	R2 = abs(C - A); 
	
	if (R1 < R2) {
	 	printf("Point B is located closer to A. The distance between them is %d", R1); 
	}
	else {
		printf("Point C is located closer to A. The distance between them is %d", R2);
	   }
	return 0;
}
