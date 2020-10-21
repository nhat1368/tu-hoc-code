#include <stdio.h>
#include <math.h>
int main() {
	
	int K, d; 
	scanf("%d", &K); 
	d = K % 7; 
	if (d == 0) {
		printf("Sunday");
	}
	if (d == 1) {
		printf("Monday");
	}
	if (d == 2) {
		printf("Tuesday");
	}
	if (d == 3) {
		printf("Wednesday");
	}
	if (d == 4) {
		printf("Thursday");
	}
	if (d == 5) {
		printf("Friday");
	}
	if (d == 6) {
		printf("Saturday");
	} 
	return 0;
}

