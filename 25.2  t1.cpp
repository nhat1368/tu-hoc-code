#include <iostream>
#include <fstream>

int main()
{
char filename[20];
int N,K;
FILE* f;
std::cout << "Enter N,K and file name: ";
std::cin >> N >> K >> filename;
f = fopen (filename,"w");
for(int i = 0; i < N; i++)
{
for(int j = 0; j < K; j++)
 { fputc ( '*', f );}
 fputc ( '\n' , f );
}
fclose(f);
return 0;
}
