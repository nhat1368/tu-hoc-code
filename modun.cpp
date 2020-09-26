#include<stdio.h>
#include<math.h>
int main()
{
float a,b,Q,W,E,R;
printf("enter a=");
scanf("%f",&a);
printf("enter b=");
scanf("%f",&b);
a=abs (a);
b=abs (b);
Q=a+b;
W=a-b;
E=a*b;
R=a/b;
printf("%f\n%f\n%f\n%f",Q,W,E,R);

	return 0;

}

