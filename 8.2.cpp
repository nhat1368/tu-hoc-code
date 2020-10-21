#include <stdio.h>
#include <math.h>
#include <locale.h> 
int main() 
{
	int A, B, k; 
	scanf("%d", &A);
	scanf("%d", &B); 
	k = A / B; 
	printf("number of segments B, consistent with A = %d", k); 
	return 0;
}
