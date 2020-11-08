#include <stdio.h>
int main(void)
{
    int a[1000],b[1000];
    int n;
 
    printf("n=");
    scanf("%i",&n);
 
    int i;
    for (i=0; i<n; ++i){
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    for (i=0; i<n; ++i){
        printf("b[%d] : ",i);
        scanf("%d",&b[i]);
    }
 
    for (i=0; i<n;++i){
        a[i]=a[i]+b[i];
        b[i]=a[i]-b[i];
        a[i]=a[i]-b[i];
    }
    printf("a= \n");
    for (i=0; i<n; ++i) printf("%d= %d\n",i+1,a[i]);
 
    printf("b= \n");
    for (i=0; i<n; ++i) printf("%d= %d\n",i+1,b[i]);
 
    return 0;
}
