#include<stdio.h>

int main()
{  int a[10];
   int N,A,D,i,U;
   printf("Enter N=");
   scanf("%d",&N);
   printf("Enter a[0]=");
   scanf("%d",&a[0]);
   printf("Enter D=");
   scanf("%d",&D);
   U=1;
   for ( i = 1 ; i <N; i++){
   	U=U*D;
   	a[i]=U*a[0];
   }
for ( i = 0 ; i<N ; i++)
printf("%d : %d\n",i,a[i]);

	return 0;

}

