#include <iostream>
#include <string>
 #include <Windows.h>
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
 
    char str[] = "ntntntntnt";
 
    char* pch = strtok(str, " ");
    while (pch != NULL)
    {
        char _ch = pch[0];
 
        for (int i = 1; i < strlen(pch); ++ i)
            if (pch[ i ] == _ch)
                pch[ i ] = '.';
 
        std :: cout << pch << " ";
        pch = strtok(NULL, " ");
    }
 
    std :: cout << std :: endl;
    system("pause");
}
