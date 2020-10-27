#include<stdio.h>
#include<math.h>
int main()
{
 float A,sum,N,i,T;
 printf("Enter A=");
 scanf("%f",&A);
 printf("Enter N=");
 scanf("%f",&N);
 
  for (i=0;i<=N;i++){
  
  	T=pow(A,i)*pow(-1,i);
  	sum = sum+T;
  	}
  	printf("result=%f",sum);


	return 0;

}
 
