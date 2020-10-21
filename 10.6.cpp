
#include <stdio.h>
#include <math.h>

int main() 
{
	int a, b, c; 
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c); 
	if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) {
		printf("This is a right triangle"); 
	}
	else {
		printf("This is not a right triangle"); 
	}
	return 0;
}
