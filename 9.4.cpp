
#include <stdio.h>
#include <math.h>
int main() 
{
    int A, B, C, S1, S2, a, b; 
    scanf ( "%d", &A );
    scanf ( "%d", &B );
    scanf ( "%d", &C ); 
    S1 = A * B; 
	S2 = C * C; 
    a = S1 / S2;  
	b = S1 % S2; 
	printf("The number of cubes that will fit in the rectangle = %d \nRemaining area = %d", a, b ); 
	return 0;
}
 
