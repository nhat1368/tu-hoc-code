#include <stdio.h>
int main()
{
    int a[10000], b[10000], c[10000];
    int n;
    printf("Enter n= ");
    scanf("%d",&n);
 
    int i;
    for (i=0; i<n; ++i){
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
 
    int k=0;
    b[k]=1;
    c[k]=a[k];
    for (i=1;i<n;++i){
        if (a[i-1]==a[i]) ++b[k];
        else{
            ++k;
            b[k]=1;
            c[k]=a[i];
        }
    }
    for (i=0; i<=k;++i) printf("  %d>%d:%d\n",i+1,b[i],c[i]);
    return 0;
}
