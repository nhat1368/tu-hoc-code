
#include <stdio.h>
#include <math.h>

int main() 
{
	int a; 
	scanf("%d", &a); 
	if ((a >= 10) && (a <= 99) && (a % 2 == 0)) {
		printf("Condition is met");
	}
	else {
		printf("Condition is not met");
	}
	return 0;
}
