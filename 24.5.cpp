#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
    string s = "C:\\Users\\nhat\\Desktop\\temp.txt";
    int count=0; 
 
    for(int i=s.length()-1;i>-1;i--) 
    {
        if(s[i]!='.') count++; 
        else break;
    }
    s.erase(s.length()-count-1,count+1); 
    count=0; 
    for(int i=s.length()-1;i>-1;i--)  
    {
        if(s[i]!='\\') count++; 
        else break;
    }
    s.erase(0,s.length()-count); 
    cout<<s<<endl;
    getch();
    return 0;
}
