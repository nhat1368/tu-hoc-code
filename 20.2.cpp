#include<stdio.h>
int main()
{
    int a[10000],b[10000];
    int n,l;
    printf("Enter n=");
    scanf("%d",&n);
    printf("Enter l=");
    scanf("%d",&l);
 
    int i;
    for (i=0; i<n; ++i){
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
 
    int i2=-1,mat=1,i3,end=n;
 
    for (i=1; i<n; ++i){         
	if (a[i-1]!=a[i]){             
	if (mat>l) {
                b[++i2]=0;
                end-=mat-1;
            } else {
                for (i3=0; i3<mat; ++i3) b[++i2]=a[i-1];             
			}             
				mat=0;         
		}        
				 ++mat;     
	}       
	          if (mat>l) {
                b[++i2]=0;
                end-=mat-1;
    } 
	else {               
        for (i3=0; i3<mat; ++i3) b[++i2]=a[i-1];
    }
 
    for (i=0; i<end;++i) a[i]=b[i];
 
    for (i=0; i<end;++i) printf("%d : %d\n",i+1,a[i]);
 
    return 0;
}
