#include<stdio.h>
 
int main()
{
    int a[1000];
    int n, i;
 
    printf("Enter n= ");
    scanf("%d",&n);
 
    for (i=0; i<n; ++i){
        printf("a[%d] : ",i+1);
        scanf("%d",&a[i]);
    }
 
    for (i=0; i<n; i+=2)             
    printf("%d\n",a[i]);       
    for (i=n-(n%2)-1; i>=1; i-=2)
    printf("%d\n",a[i]);
 
    return 0;
}
