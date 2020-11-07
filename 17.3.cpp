#include<stdio.h> 
 
int main()
{
    int a[1000];
    int n;
 
    printf("n=");
    scanf("%d",&n);
 
    int i;
    for (i=0; i<n; ++i){
        printf("a[%d] : ",i+1);
        scanf("%d",&a[i]);
    }
 
    int min = a[1];
 
    for (i=15; i<n; i+=2) {
        if (a[i]<min) min=a[i];
    }
 
    printf("%d\n",min);
 
    return 0;
}
