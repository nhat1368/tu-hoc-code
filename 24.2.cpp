#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char s[255];
	cout<<"Enter the string:";cin.getline(s,255);
	int n = strlen(s),i=0,min=256,length;
	bool check;
	while (i<n)
	{   
		length=0;check=false;
		while(s[i]!=' '&&i<n) 
		{
			length++;
			check=true;
			i++;
		}
		if (min>length&&check) min=length;
		i++; 
	}
	cout<<"the length of the shortest word: "<<min;
}
