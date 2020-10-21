#include<stdio.h>

int main()
{
	float x,y;
	printf("Enter x=");
	scanf("%f",&x);
	printf("Enter y=");
	scanf("%f",&y);
	
	if ((x>0) && (y>0)) {
		printf("First quarter");
		}
	else if ((x<0) && (y>0)){
		printf("Second quarter");
		}
	else if ((x<0) && (y<0)) {
		printf("Third quarter");
		}
	else 
	printf("Fourth quarter");
	
	return 0;
	}
	
