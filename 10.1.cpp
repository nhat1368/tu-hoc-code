
#include <stdio.h>
#include <math.h>

int main() 
{
	int A, B; 
    printf("Enter A=");
	scanf("%d", &A);
	printf("Enter B=");
	scanf("%d", &B); 
	if ((A > 2) && (B <= 3)) { 
		
		printf("The inequality is valid for given A and B"); 
	}
	
	else {
		
		printf("Inequality is not true for given A and B"); 
	
	}
	return 0;
}
