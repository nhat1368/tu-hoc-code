#include <iostream>
#include<math.h>
using namespace std;

int main()
{  
  float A,A2,A3,A6,A9,A15;
  cout <<  "Enter the value A: ";
  cin >>A;
  A2=A*A;
  A3= A2* A;
  A6= A3*A2*A;
  A9=A6*A3;
  A15=A9*A6;
  cout << "\nA2 = " << A2;
  cout << "\nA3 = " << A3;
  cout << "\nA6 = " << A6;
  cout << "\nA9 = " << A9;
  cout << "\nA15 = " << A15;
  return 0;
  }
