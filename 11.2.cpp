#include <stdio.h>
#include <math.h>

int main() 
{
	int a, b, c, S;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c); 
	if ((a > b) && (b>c)){
	S=a+b;
	printf("Sum the two largest numbers S=%d",S);
	}
	
	else if((b>c) && (c>a)){
	S=b+c;
	printf("Sum the two largest numbers S=%d",S);
	}
	else if	((c>b) && (a>b)){
	    S = a + c;
		printf("Sum the two largest numbers S=%d",S);
	}
	 return 0;
		}
 
  		

		
