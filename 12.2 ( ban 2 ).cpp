#include<stdio.h>
#include<conio.h>
 int main(){
	char S;
	int N;
	printf(" enter symbol direction (e - east, w - west, s - south, n - north)"); 
	scanf("%c", &S);
	printf(" enter the digital command for the robot(0 - continue moving, 1 - turn left, -1 - turn right)"); 
	scanf("%i",&N);
	printf(" direction - ");
	switch(N){
		case 1: switch(S){
			case 'e': printf("n");break;
			case 'w': printf("s");break;
			case 's': printf("e");break;
			case 'n': printf("w");break;
		} break;
		case -1: switch(S){
			case 'e': printf("s");break;
			case 'w': printf("n");break;
			case 's': printf("w");break;
			case 'n': printf("e");break;
		} break;
		case 0: switch(S){
			case 'e': printf("e");break;
			case 'w': printf("w");break;
			case 's': printf("s");break;
			case 'n': printf("n");break;
		} break;
	}
	return 0;
}
