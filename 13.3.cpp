#include <stdio.h>
 
int main(void)
{
   int n, A=0 ,i;
   printf("n=");
   scanf ("%d", &n);
 
   for  (i =1; i<=(2*n-1); i+=2){
     A += i;
     printf("%d\n",A);
  }
   return 0;
}
