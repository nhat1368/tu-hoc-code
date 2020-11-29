#include <iostream>
#include <string>
 
int main() 
{
    std::string str("D:\\321.txt");
    std::string::size_type ind = str.find_last_of('\\');
    if (ind != std::string::npos)
    {
        str.erase(ind);
        ind = str.find_last_of('\\');
        if (ind != std::string::npos)
        {
            str.erase(0, ind + 1);
        }
    }
    if (str.find(':') != std::string::npos)
    {
        str = '\\';
    }
    std::cout << str << std::endl;
    return 0;
}
