#include <stdio.h>
#include <string.h>
#define string_size 80
int main(){
    char string[string_size];
    char newstring[string_size];
    char *ptr=string+1,*newptr=newstring;
    printf("Enter string: ");
    scanf("%[^\n]%*c",string);
    while(*newptr++=*ptr,ptr+=2,ptr<string+strlen(string));
    ptr=ptr==string+strlen(string) ? ptr-1 : ptr-3;
    while(*newptr++=*ptr,ptr-=2,ptr>=string);
    *newptr='\0';
    printf("New string: %s\n",newstring);
    return 0;
}

