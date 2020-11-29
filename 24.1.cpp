#include<iostream>
#include<string.h>
using namespace std;
int count(char *s){
	int n=strlen(s),i,c=0;
	if(s[0]!=' ')
		c=1;
	for(i=0;i<n-1;i++)
	{
		if(s[i]==' '&&s[i+1]!=' ')
			c++;
	}
	return c;
}
main(){
	char s[90];
    printf("Enter string:");
    gets(s);
	cout<<"\nThe number of words: "<<count(s);
}
