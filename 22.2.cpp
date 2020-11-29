#include<stdio.h>
swap_2_columns(int a[][100],int m,int n,int c1,int c2){
	int t;
	for(int i=1;i<=m;i++){
		t=a[i][c1];
		a[i][c1]=a[i][c2];
		a[i][c2]=t;
	}
}
export_array(int a[][100],int m,int n){
	int i,j;
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			printf("%d",a[i][j]);                             //cout<<a[i][j]<<" ";
		}
		printf("\n");                                        //cout<<"\n";
	}
}
int main(){
	int a[100][100];
	int M,N,i,j;
		printf("enter the number of rows M=");
	scanf("%d",&M);             //cout<<"enter the number of rows M: "; cin>>M;
	printf("enter the number of columns N=");
	scanf("%d",&N);      
	if(M*N==0){ 
	printf("error");
}
	else{
		for(i=1;i<=M;i++){
			for(j=1;j<=N;j++){
				printf("a[%d][%d]",i,j);
			    scanf("%d",&a[i][j]); 
			}
		}
		printf("the matrix:");
		printf("\n");                                   //cout<<"the matrix: ";
		               
	    export_array(a,M,N);
		printf("\n");
		printf("the matrix after swap column containning the minimum and maximum elements of the matrix: ");
		printf("\n");
		int jmax=1;
		int jmin=1;
		for(i=1;i<=M;i++){
			for(j=1;j<=N;j++){
				if(a[i][j]>a[i][jmax]){
					jmax=j;
				}
				if(a[i][j]<a[i][jmin]){
					jmin=j;
				}
			}
		}
		swap_2_columns(a,M,N,jmax,jmin);
		export_array(a,M,N);
	}
}
