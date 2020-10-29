#include <stdio.h>
int main()
{
   int a,b;
   printf("Enter a=");
   scanf ("%d", &a);
   printf("Enter b=");
   scanf ("%d", &b);
 
   int M=a;
   while (M>=0){
       M -= b;
   }
   printf("%d\n ",M+b);
 
   return 0;
}
