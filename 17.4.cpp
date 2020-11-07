#include <stdio.h>

int main() {
	
	int N, i, max, l; 
	int a[1000] ; 
	printf("Enter N=");
	scanf("%d", &N); 

	for(i = 0; i < N; i++) {
		printf("a[%d]=",i+1);
		scanf("%d", &a[i]); 
	}
	for (i = 1; i < N - 1; i++) {
		if ((a[i] > a[i - 1]) && (a[i] > a[i + 1])) {
			max=a[i];	
		}
		i++;
		}
		printf("Last local maximum number = %d",max); 
		return 0;
}
