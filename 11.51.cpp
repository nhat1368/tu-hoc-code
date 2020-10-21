
#include <stdio.h>
#include <math.h>

int main() {
	
	int a; 
	scanf("%d", &a); 
	
	if (a > 0) {
		if (a % 2 == 0) { printf("Positive even number"); }
		else { printf("Positive odd number"); }
	}
	else {
		if (a < 0) {
			if (a % 2 == 0) { printf("Negative even number"); }
			else { printf("Negative odd number"); }
		}
		if (a == 0) {  printf("Zero number");  }
	}
	return 0;
}
