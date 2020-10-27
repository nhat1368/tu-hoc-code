#include <stdio.h>
#include <math.h>

int main() {
	
	int X, m, n, p, q; 
	char *a1[] {"one hundred", "two hundred", "three hundred", "four hundred", "five hundred", "six hundred", "seven hundred", "eight hundred", "nine hundred"};
	char *b1[] {"ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
	char *d1[] {"eleven", "twelve", "thirteen", "fourteen", "ten years", "sixteen", "seventeen", "eighteen", "nineteen"}; 
	char *c1[] {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	
scanf("%d", &X);
	m = X / 100;
	q = X % 100;
	n = q / 10;
	p = q % 10;
	printf("%s ", a1[m - 1]); 
	if ((q == 11) || (q == 12) || (q == 13) || (q == 14) || (q == 15) || (q == 16) || (q == 17) || (q == 18) || (q == 19))
	{
		printf("%s ", d1[q - 11]); 
	}
	else 
	{
		if (n != 0)
		{
			printf("%s ", b1[n - 1]); 
		}
		if (p != 0)
		{
	        printf("%s ", c1[p- 1]); 
		}
	}
	return 0;
}
