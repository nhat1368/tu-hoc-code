#include <stdio.h>
int main(void)
{
    int a[10];
 
    int n;
 
    printf("Enter n= ");
    scanf("%d",&n);
 
    int i;
    for (i=0; i<n; ++i){
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
 
    int min=0,max=0;
 
    for (i=n-1; i>=0; --i){
        if (a[i]>a[max]) max=i;
        if (a[i]<a[min]) min=i;
    }
 
    if (max<min) {
        max+=min;
        min=max-min;
        max=max-min;
    }
 
    for (i=min+1; i<min+(max-min); ++i) a[i]=0;
 
    printf("A: \n");
    for (i=0; i<n; ++i) printf("  %d: %d\n",i+1,a[i]);
 
    return 0;
}
