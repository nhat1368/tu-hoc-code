#include <stdio.h>
int swap(float *f1, float *f2){
    *f1+=*f2;
    *f2=*f1-*f2;
    *f1=*f1-*f2;
    return 0;
}
 
int main()
{
    float a[10];
 
 
    int n;
    printf("Enter n= ");
    scanf("%i",&n);
 
    int i;
    for (i=0; i<n; ++i){
        printf("a[%d] : ",i);
        scanf("%f",&a[i]);
    }
 
    for (i=n-2; i>=0; --i){
        if (a[i]<a[i+1]) {
            swap(&a[i], &a[i+1]);
        }
    }
 
    for (i=1; i<n; ++i){
        if (a[i-1]<a[i]) {
            swap(&a[i-1], &a[i]);
        }
    }
    printf("A: \n");
    for (i=0; i<n; ++i) printf("  %d: %f\n",i+1,a[i]);
 
    return 0;
}
