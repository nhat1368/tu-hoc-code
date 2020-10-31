#include <stdio.h>
 
float Fact2(int n){
    int F = 1;
    for (; n > 0;n = n-2) F = F * n;
    return F;
}
 
int main()
{
    int i, n;
    printf("n:");
    scanf("%d", &n);
    printf("N!!: %f\n",Fact2(n));
    
    return 0;
}
