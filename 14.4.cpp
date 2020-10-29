#include <stdio.h>
int main()
{
   float p;
   printf("p=");
   scanf ("%f", &p);
   int k=1;
   float s=1000;
   while (s<=1100) {
       ++k;
       s+=s*p/100;
   }
   printf("k: %d\ns=%f\n",k,s);
   return 0;
}

