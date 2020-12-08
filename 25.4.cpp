#include <iostream>
#include <fstream>
#include <string>
 
int main(){
             std::string str;
             std::ifstream infile("C:\\Users\\nhat\\Desktop\\temp.txt");
if(!infile){
             std::cerr << "Error in opening !" << std::endl;
}
else
{
        while(infile >> str) {
		if(s.substr(0,5) == "     "){
            count++;
        }
        std::cout << str  << ' ';
    }
}
infile.close();
    system("pause");
    return 0;
}
