#include<stdio.h>
swap(int a[][100],int M,int N,int x){
	int imax=1,imin=1;
	for(int i=1;i<=N;i++){
		if(a[x][i]>a[x][imax]) imax=i;
		if(a[x][i]<a[x][imin]) imin=i;
	}
	int t;
	t=a[x][imax];
	a[x][imax]=a[x][imin];
	a[x][imin]=t;
}
int main(){
	int a[100][100];
	int M,N,i,j;
	printf("enter the number of rows M=");
	scanf("%d",&M);             //cout<<"enter the number of rows M: "; cin>>M;
	printf("enter the number of columns N=");
	scanf("%d",&N);                //cout<<"enter the number of columns N: "; cin>>N;
	if(M*N==0){ 
	    printf("error");                  //out<<"error";
	}else{
		for(i=1;i<=M;i++){
			for(j=1;j<=N;j++){
				printf("a[%d][%d]",i,j);
			    scanf("%d",&a[i][j]);           //cout<<"enter value a"<<i<<j<<" "; cin>>a[i][j];
			}
		}
		printf("the matrix:");
		printf("\n");                                   //cout<<"the matrix: ";
		                                  //cout<<"\n";
		for(i=1;i<=M;i++){
			for(j=1;j<=N;j++){
				printf("%d",a[i][j]);                            //cout<<a[i][j]<<" ";
			}
			printf("\n");
		}
		for(i=1;i<=N;i++){
			swap(a,M,N,i);
		}
		printf("the matrix after swap:");                              //cout<<"the matrix after swap: ";
		printf("\n");
		for(i=1;i<=M;i++){
			for(j=1;j<=N;j++){
				printf("%d",a[i][j]);             //cout<<a[i][j]<<" ";
			}
			printf("\n");                                //cout<<"\n";
	    }
    }
}
