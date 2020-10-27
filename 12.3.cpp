
#include <stdio.h>
#include <math.h>

int main() {

const char *exercise[] { "ten" , "eleven" , "twelve" , "thirteen" , "fourteen" , "fifteen" ,"sixteen" , "seventeen" , "eighteen" , 
	                     "nineteen" , "twenty" , "twenty one" , "twenty-two" , "twenty-three" , "twenty four" , "twenty five" , "twenty-six" , 
	                     "twenty-seven" , "twenty eight" , "twenty-nine" , "thirty" , "thirty one" , "thirty two" , "thirty three" , 
	                    "thirty four" , "thirty five" , "thirty six" , "thirty seven" , "thirty eight" , "thirty nine" , "forty" };
	 int d;  
	 scanf("%d", &d);
	 
	 printf("%s study assignment",exercise[d - 10]); 
	 
	 return 0;
}
