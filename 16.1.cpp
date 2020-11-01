#include <stdio.h>
int main(void)
{
    int a[1000];
    int n , i=1 , i2=1;
 
    printf("N: ");
    scanf("%d",&n);
    for (i=0; i<n; ++i, i2=i2+2) a[i]=i2;
    for (i=0; i<n; ++i) printf("%d : %i\n",i,a[i]);
    return 0;
}
