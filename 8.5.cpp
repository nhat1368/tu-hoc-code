#include <stdio.h>
#include <math.h>

int main() 
{
	int a, b, c; 
	scanf("%d", &a); 
	b = a % 100;
	c = a / 100;
	a = b * 10 + c; 
	printf("New issue = %d", a); 
	return 0;
}
