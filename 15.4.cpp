#include<stdio.h>

 int Quarter(float x , float y){
 	if((x>0) && (y>0)){ return 1;}
 	if((x<0) && (y>0)){ return 2;}
 	if((x<0) && (y<0)){ return 3;}
 	if((x>0) && (y<0)){ return 4;}
}
int main()
{
	int i;
	float x , y;
	printf("Enter x:");
	scanf("%f",&x);
	printf("Enter y:");
	scanf("%f",&y);
	printf("Quarter=%d\n",Quarter(x,y));


	return 0;

}

