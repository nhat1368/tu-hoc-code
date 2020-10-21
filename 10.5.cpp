
#include <stdio.h>
#include <math.h>

int main() 
{
	
	int a, b, c, d, e; 
	scanf("%d", &a); 
	b = a / 1000; 
	c = (a % 1000) / 100; 
	d = (a % 100) / 10; 
	e = a % 10; 
	if ((b == e) && (c == d)) {
		printf("Condition is met"); 
	}
	else {
		printf("Condition is not met"); 
	}
	return 0;
}
