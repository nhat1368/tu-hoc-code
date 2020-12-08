#include <iostream>
#include <fstream>
 
int main()
{
    std::ifstream ifs("C:\\Users\\nhat\\Desktop\\nhat9.txt");
    std::ofstream ofs("C:\\Users\\nhat\\Desktop\\trang15.txt", std::ios::app);
    ofs << ifs.rdbuf();
    system("pause");
    return 0;
}
