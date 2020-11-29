#include <iostream>
#include <cstring>
#include <string>
using namespace std;
bool sosanh(string s,string ss,int i){
	for (int j=0;j<i+ss.length();j++){
		if (s[j+i]!=ss[j]) return false;
	}
	return true;
}
int main(){
	string s,ss;
	int dem = 0;
	cin >> s;
	cin >> ss;
	for (int i=0;i<=s.length()-ss.length();i++){
		if (sosanh(s,ss,i)) dem++;
	}
	cout << dem;
	return 0;
}
