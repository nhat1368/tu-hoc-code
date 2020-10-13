#include <iostream>
#include<math.h>
using namespace std;

int main()
{  
  float A,A2,A4,A8;
  cout <<  "Enter the value A: ";
  cin >>A;
  A2=A*A;
  A4= A2* A2;
  A8= A4*A4;
  cout << "\nA2 = " << A2;
  cout << "\nA4 = " << A4;
  cout << "\nA8 = " << A8;
  
  return 0;
  }
