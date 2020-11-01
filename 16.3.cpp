#include<stdio.h>

int main()
{  int i;
   int a[];
   int N,A,B;
   printf("Enter N=");
   scanf("%d",&N);
   printf("Enter A=");
   scanf("%d",&A);
   printf("Enter B=");
   scanf("%d",&B);
    a[0] = A;
   	a[1] = B;
   for ( i = 2; i < N ; i++){
   	 a[i] = a[i-1] + a[i-2];
   }
   for (i = 0; i < N ; i++)
   printf("%d: %d\n",i,a[i]);
   
	return 0;

}

