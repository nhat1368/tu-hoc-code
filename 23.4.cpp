#include <string>
#include <iostream>

using namespace std;

int main()
{
  char C;
  string S, S2 = "";
  cout << "Enter the string: ";
  getline(cin, S);
  cout << "Enter character: ", cin >> C;
  for (int i = 0; i < S.length(); i++)
  {
    S2 += S[i];
    if (S[i] == C)
    {
      S2 += S[i];
    }
  }
  S = S2;
  cout << S << '\n';
  return 0;
}


