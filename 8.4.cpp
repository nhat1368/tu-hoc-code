#include <stdio.h>
#include <math.h>
int main() {
	int d, b, a; 
	scanf("%d", &d); 
	a = d / 10;
	b = d % 10;
	d = b * 10 + a; 
	printf("New issue = %d", d); 
	return 0;
}
