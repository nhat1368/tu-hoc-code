#include<stdio.h>
add(double a[],int &n,int x,int position){
	for(int i=n;i>=position;i--){
		a[i+1]=a[i];
	}
	a[position]=x;
	n++;
}
add_0_before_positive_element(double a[],int &n){
	for(int i=1;i<=n;i++){
		if(a[i]>0){
			add(a,n,0,i);
			i++;
		}
	}
}
main(){
	double a[1000];
	int n,i;
	printf("enter the size of the array n(n>=1):");
	scanf("%d",&n);                       
	for(i=1;i<=n;i++){
		printf("a[%d]=",i);
	    scanf("%lf",&a[i]);	                               
	}
	if(n<1){ printf("error(please enter n>=1)");        
	}else{
		printf("the array: ");
		for(i=1;i<=n;i++){                             
		for(i=1;i<=n;i++){
			printf("%lf",a[i]);                                  
		}
		    printf("\nthe array after add 0 before positive elements: ");          
		add_0_before_positive_element(a,n);
		for(i=1;i<=n;i++){
			printf("%lf",a[i]);          
		}
	}
}
}
