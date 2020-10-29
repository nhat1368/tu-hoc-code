#include <stdio.h>
int main()
{
   int a,b,i,v;
   printf("a=");
   scanf ("%d", &a);
   printf("b=");
   scanf ("%d", &b);
 
  
   for  (i =a ; i<=b ; i++){
      for (v=1 ; v<=i ; v++) 
	  printf("%d",i);
      printf("\n");
   }
 
   return 0;
}
