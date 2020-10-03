#include <math.h>
#include<stdio.h>
int main()
{
    float x1,y1,S,P;
    printf("x1:");
    scanf ("%f", &x1);
    printf("y1:");
    scanf ("%f", &y1);
 
    float x2,y2;
    printf("x2:");
    scanf ("%f", &x2);
    printf("y2:");
    scanf ("%f", &y2);
    P=2*(abs(x1-x2)+abs(y1-y2));
    
	S=abs(x1-x2)*abs(y1-y2);
    
	printf("P:%f\n",P);
 
    printf("S:%f\n",S);
    return 0;
}
