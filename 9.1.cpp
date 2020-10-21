#include <stdio.h>
#include <math.h>
int main() {
	int N, s; 
	scanf("%d", &N); 
	s = N % 60; 
	printf("The number of seconds has passed since the last minute = %d", s); 
	return 0;
}
