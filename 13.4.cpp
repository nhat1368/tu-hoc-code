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
  
  
  	T=pow(A,i);
  	sum = sum+T;
  	}
  	printf("result=%f",sum);


	return 0;

}
 //sum = (pow(A,N+1)-1)/(A-1);
 //printf("result=%f",sum);

