#include <math.h>
#include<stdio.h>
int main()
{
    float A, B, C;
    printf("A:");
    scanf("%f", &A);
 
    printf("B:");
    scanf ("%f", &B);
 
    printf("C:");
    scanf ("%f", &C);
 
    float AC = abs(A-C);
    printf("AC:%f\n",AC);
 
    float BC = abs(B-C);
    printf("BC:%f\n",BC);
 
    printf("AC+BC:%f\n",BC+AC);
 
    return 0;
}
