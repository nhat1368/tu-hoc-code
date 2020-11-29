#include<stdio.h>
export_array(int m,int a[][100]){
	int i,j;
	for(i=1;i<=m;i++){
		for(j=1;j<=m;j++){
			printf("%d",a[i][j]); 
		}
		printf("\n"); 
	}
}
swap_2_columns(int m,int a[][100],int c1,int c2){
	int i;
	int t;
	for(i=1;i<=m;i++){
		t=a[i][c1];
		a[i][c1]=a[i][c2];
		a[i][c2]=t;
	}
}
swap(int m,int a[][100]){
	int i;
    for(i=1;i<=m/2;i++){
		swap_2_columns(m,a,i,m+1-i);
	}
}
sum(int m,int a[][100],int x){
	int i;
	int s=0;
		for(i=1;i<=m;i++){
			s+=a[i][x-i];
	    }
	return s;
}
main(){
	int a[100][100],t;
	int m,i,j,s=0;
	printf("Enter M(M>=1): ");
	scanf("%d",&m);                                           
	if(m<1){
	 printf("Error(please enter M>=1)");                                             
	}
	else{
		for(i=1;i<=m;i++){
			for(j=1;j<=m;j++){
				printf("a[%d][%d]", i , j);
			    scanf("%d ",&a[i][j]);                                             
			}
		}
		printf("The matrix: ");                             
		printf("\n");                                           
		export_array(m,a);
		printf("The sum of the elements of each diagonal parallel to the main one: ");                              
		swap(m,a);
		for(i=2;i<=2*m;i++){
			if(i!=m+1){
				printf("%d  ",sum(m , a , i));                          
			}
		}
	}
}
