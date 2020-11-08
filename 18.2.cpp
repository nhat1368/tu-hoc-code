#include<stdio.h>

int main()
{
int a[1000],b[1000];
int n,i,j,k,T=0;
printf("Enter n=");
scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("a[%d]=",i);
    scanf("%d",&a[i]);
}
    for(k=0;k<n;k++){
	T=0;

    for(j=0;j<=k;j++){
	T=T+a[j];
    }
    b[k]=T/(k+1);
}
for(k=0;k<n;k++){
	printf("%d",b[k]);
}
 

	return 0;

}

