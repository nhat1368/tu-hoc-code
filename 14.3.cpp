#include <stdio.h>
int main()
{
   int n;
   printf("Enter n=");
   scanf ("%d", &n);
   int k=0, temp=0;
   while (temp<n) {
       ++k;
        temp=temp+k;
   }
   printf("K: %d\nSum:%d\n",k,temp);
   return 0;
}
