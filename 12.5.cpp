#include<stdio.h>
int main()
{
   
   int n;
   printf("year:") ;
   scanf ("%d", &n);
 
   printf("year:");
 
   switch ((n)%10) {
   case 0:
   case 1:
       printf("white");
       break;
   case 2:
   case 3:
       printf("black");
       break;
   case 4:
   case 5:
       printf("green");
       break;
   case 6:
   case 7:
       printf("red");
       break;
   case 8:
   case 9:
       printf("yellow");
       break;
   }
printf(" ");
 
   switch ((n+8)%12) { 
   case 0:
       printf("mouse\n");
       break;
   case 1:
       printf("cows\n");
       break;
   case 2:
       printf("tiger\n");
       break;
   case 3:
       printf("rabbit\n");
       break;
   case 4:
       printf("dragon\n");
       break;
   case 5:
       printf("snake\n");
       break;
   case 6:
       printf("horse\n");
       break;
   case 7:
       printf("sheep\n");
       break;
   case 8:
       printf("monkey\n");
       break;
   case 9:
       printf("cock\n");
       break;
   case 10:
       printf("dog\n");
       break;
   case 11:
       printf("pig\n");
       break;
   }
 
   return 0;
}
