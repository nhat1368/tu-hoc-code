#include <stdio.h>
#include <math.h>
int main() 
{
	int A, B, k, l; 
	scanf("%d", &A);
	scanf("%d", &B); 
	k = A / B;
	l = A - k * B; 
	printf("The length of the line cannot be empty A = %d", l); 
	return 0;
}
