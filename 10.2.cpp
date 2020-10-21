
#include <stdio.h>
#include <math.h>

int main() 
{
	
	int A, B, C; 
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C); 
	if ((A < B) && (B < C)) {
		printf("Inequality is true"); 
	}
	else {
		printf("Inequality is false"); 
	}
	return 0;
}
