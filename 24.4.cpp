#include <iostream>
#include <string.h>
using namespace std;
main()
{
	char str[30];
	int i, n, vow_a, vow_e, vow_i, vow_o, vow_u, vow;
	cout<<"Enter a tring: ";
	gets(str);
	n=strlen(str);
	vow_a=vow_e=vow_i=vow_o=vow_u=vow=0;
	for (i=0;i<n;i++)
	{
		switch (toupper(str[i]))
		{
		case 'A':
			vow_a++; break;
		case 'E':
			vow_e++; break;
		case 'I':
			vow_i++; break;
		case 'O':
			vow_o++; break;
		case 'U':
			vow_u++; break;
		default:
			break;		
		}
	}
	vow = vow_a + vow_e + vow_i + vow_o + vow_u;
	cout<<"the number of vowels: "<<vow;
}

