#include<stdio.h>

export_array(int a[][100] , int m , int n){
	int i,j;
	for(i = 1 ; i <= m ; i++){
		for(j = 1 ; j <= n ; j++){
			printf("%d",a[i][j]);         //cout<<a[i][j];
		}
		printf("\n");        //cout<<"\n";
	}
}
swap_2_rows(int a[][100] , int m , int n , int r1 , int r2){
	int i , t;
	for(i = 1 ; i <= n ; i++){
		t = a[r1][i];
		a[r1][i] = a[r2][i];
		a[r2][i] = t;
	}
}
swap(int a[][100],int m,int n){
	int i,j;
	for(i=1;i<=m;i++){
		for(j=i+1;j<=m;j++){
			if(a[i][1]>a[j][1]){
				swap_2_rows(a,m,n,i,j);
			}
		}
	}
}
main(){
	int a[100][100];
	int m,n,i,j;
	printf("enter the number of rows M=");
	scanf("%d",&m);             
	printf("enter the number of columns N=");
	scanf("%d",&n);   
	if(m*n==0){ 
	printf("error");
	}
	else{
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
				printf("a[%d][%d]", i , j);
			    scanf("%d ",&a[i][j]);
			}
		}
		printf("the array: ");               //cout<<"the array: ";
		printf("\n");                //cout<<"\n";
		export_array(a,m,n);
		printf("the array after swap: ");                                 //cout<<"the array after swap: ";
		printf("\n");
		swap(a,m,n);
		export_array(a,m,n);
	}
}
