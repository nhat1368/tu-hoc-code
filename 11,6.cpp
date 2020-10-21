#include <stdio.h>
 
int main()
{
   int num;
   printf("num:") ;
   scanf ("%i", &num);
 
   if ((num%2) == 0){
    printf("Even number ");
}
   else printf("\nOdd number ");
   
   if (num>99) {
   printf("\nThree-digit number ");
}
   else {
      if ((99>=num) & (num > 9)) printf("\nTwo-digit number ");
   else if (num <= 9)  printf("\nSingle digit ");
}
   return 0;
}
