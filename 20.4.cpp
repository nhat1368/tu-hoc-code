#include <stdio.h>
#include <math.h>
 
int main()
{
    float a[1000][1000];
    int n;
 
    printf("Enter n= ");
    scanf("%d",&n);
 
    int i;
    for (i=0; i<n; ++i){
        printf("a[%d]:\n",i+1);
        printf("x: ");
        scanf("%f",&a[i][0]);
        printf("y: ");
        scanf("%f",&a[i][1]);
    }
 
    int amax=0;
    float r,rmax;
    for (i=0; i<n; ++i){
        if (a[i][0]<0 && a[i][1]>0){
            r= sqrt(pow(a[i][0],2)+pow(a[i][1],2));
            if (r>rmax || i==0) {
                rmax=r;
                amax=i;
            }
        }
    }
 
    printf("x: %f\n y: %f\n",a[amax][0],a[amax][1]);
    return 0;
}
