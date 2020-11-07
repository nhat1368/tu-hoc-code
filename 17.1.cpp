#include<stdio.h>
 int main(void)
{
    int a[10];
    int n,K,L,t,f;
    float v;
    printf("N: ");
    scanf("%i",&n);
 
    printf("K: ");
    scanf("%i",&K);
 
    printf("L: ");
    scanf("%i",&L);
 
    int i;
    for (i=0; i<n; ++i){
        printf("a[%i] : ",i+1);
        scanf("%i",&a[i]);
    }
 
   for (i = K; i <= L; i++) {
		f = f + a[i]; 
	t = L - K + 1; 
	v = f / t; 
	printf("Average = %f", v);
	return 0;
}
}
