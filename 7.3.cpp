#include <stdio.h>
#include <math.h>

int main() 
{
	int x, A, y, b1, b2;
	scanf("%d", &x); 
	scanf("%d", &A);
	scanf("%d", &y); 
	b1 = A / x;
	b2 = b1 * y;  
	printf("One kilogram of candy is worth %d\n%d kg of candy is worth %d", b1, y, b2); 
	return 0;
}
