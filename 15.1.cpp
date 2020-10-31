
#include <stdio.h>
#include<math.h> 
void powerA3(float a, float *b)
{
   *b=pow(a,3);
}
 
int main()
{
    int i;
    for(i=1;i<=5;++i){
        float a,b;
        printf("A:");
        scanf("%f", &a);
        powerA3(a, &b);
        printf("B: %f\n",b);
   }
    
	return 0;
}
