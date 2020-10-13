#include <iostream>
using namespace std;

int main()
{
  int a,b,c,t;
  cin>>a ;
  cin>>b;
  cin>>c;
  t=a;
  a=b;
  b=c;
  c=t;
 	cout << "after swapping, a = " << a << ", b = " << b << ", c = " << c ;
}

