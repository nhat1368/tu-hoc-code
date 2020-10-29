#include<stdio.h> 
int main()
{
   int a,b;
   printf("Enter a=");
   scanf("%d",&a);
   printf("Enter b=");
   scanf("%d",&b);
   while ((a!=0)&(b!=0)){
       if (a>b) a=a%b;
       else b=b%a;
   }
   printf("%d\n",a+b);
   return 0;
}
