#include<stdio.h>
export_array(int a[][100] , int m , int n){
	int i,j;
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			printf("%d",a[i][j]);                
		}
		printf("\n");                           
	}
}
swap(int a[][100],int m,int n){
	int t;
	int i,j;
	for(i=1;i<=m/2;i++){
		for(j=1;j<=n/2;j++){
			t=a[i][j];
			a[i][j]=a[i+m/2][j+n/2];
			a[i+m/2][j+n/2]=t;
		}
	}
}
int main(){
	int a[100][100];
	int m,n,i,j;
	printf("enter the number of rows M=");
	scanf("%d",&m);             
	printf("enter the number of columns N=");
	scanf("%d",&n);   
	
	if(m*n!=0&&m%2==0&&n%2==0){
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
				printf("a[%d][%d]",i,j);
			    scanf("%d",&a[i][j]);
			}
		}
		printf("the matrix:");
		printf("\n");
	    export_array(a,m,n);
		swap(a,m,n);
		printf("the matrix after swaping: ");                 
		printf("\n");
		export_array(a,m,n);	
	}else{
		printf("error");
	}
}

