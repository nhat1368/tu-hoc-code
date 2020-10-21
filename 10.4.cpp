
#include <stdio.h>
#include <math.h>

int main() 
{
	int a, b, c, d; 
	scanf("%d", &a); 
	b = a / 100; 
	c = (a % 100) / 10; 
	d = a % 10; 
	if (((b > c) && (c > d)) || ((b < c) && (c < d))) {
		printf("Condition is met");
	}
	else {
		printf("Condition is not met");
	}
	return 0;
}
