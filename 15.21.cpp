#include<stdio.h>
int SIGN(int x){
	if(x<0){
		return -1;
	}
	if(x==0){
		return 0;
	}
	else 
	return 1;
	}
int main()
{

float a , b ;
    scanf( "%f", &a );
    scanf( "%f" , &b );
    printf("Result=%d ", SIGN(a) + SIGN(b));
   
	
	return 0;

}

