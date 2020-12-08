#include <iostream>
#include <locale>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;
 
int main()
{
    
    fstream infile("C:\\Users\\nhat\\Desktop\\nhat.txt");
    string s;
 	
    while(!infile.eof()) {
    	getline(infile , s);
    	cout << s << "\n ";
    
}
    infile.close();
	cout << "Number of paragraphs in a file: " << s.length() << endl; 
    
    
    
return 0;
}
