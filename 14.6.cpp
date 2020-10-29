#include <stdio.h>
int main() {
int N , a = 0, b = 1, c = 1 , K=2;  
scanf("%d", &N); 
while (c <= N) {
	a = b;
	b = c;
	c = b + a;
	K++; 
}
printf("%d", K); 
return 0;
}

