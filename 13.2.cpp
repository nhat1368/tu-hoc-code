#include<stdio.h>

int main()
{

 float D=1 , i , N;
 printf("Enter N=");
 scanf("%f",&N);
 
  for ( i=1 ; i<=N ; i++){
 	D = D * (1 + i/10);
	printf("D=%f\n",D); 
 }

	return 0;

}

