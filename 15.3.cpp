#include <stdio.h>
#include<math.h> 
#define pi 3.14
float RingS(float r1, float r2){
   return pi*(r1*r1-r2*r2);
}
 
int main()
{
    int i;
    for(i=1; i<=3; ++i){
        float r1,r2;
        printf("R1:");
        scanf("%f", &r1);
        printf("R2:");
        scanf("%f", &r2);
        printf("S:%f\n",RingS(r1,r2));
    }
    return 0;
}
