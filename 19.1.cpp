#include <stdio.h>
int main()
{
    int a[1000];
    int n,k=0;
    printf("Enter n= ");
    scanf("%d",&n);
 
    int i;
    for (i=0; i<n; ++i){
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
 
    for (i=1; i<n; ++i){
            if (a[k]!=a[i]){
                ++k;
                a[k]=a[i];
           }
    }
    ++k;
 
    for (i=0; i<k; ++i){
	printf("%d\n",a[i]);
 }
    return 0;
}
