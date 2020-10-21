
#include <stdio.h>
#include <math.h>

int main() 
{
    int a, b, c; 
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c); 
	if ((a + b > c) && (a + c > b) && (b + c > a)) {
		printf("These are the three sides of a triangle");
	}
	else {
		printf ("These are not the three sides of a triangle"); }
	return 0;
}
