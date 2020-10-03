#include<stdio.h>
#include<math.h>
int main()
{
float x1,y1,x2,y2,S;

printf("enter x1=");
scanf("%f",&x1);

printf("enter y1=");
scanf("%f",&y1);

printf("enter x2=");
scanf("%f",&x2);

printf("enter y2=");
scanf("%f",&y2);

S=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
printf("%f",S);
	return 0;

}

