#include<bits/stdc++.h>
using namespace std;

int OperationsBinaryString(string str) {
	int len=0;
	int ans= str[0]-'0';
	for(len=0;str[len]!='\0';len++);
	for(int i=1;i<len-1;i+=2) {
		int j=i+1;
		if(str[i]=='A')
			ans = ans & (str[j]-'0');
		else if(str[i]=='B')
			ans = ans | (str[j]-'0');
		else if(str[i]=='C')
			ans = ans ^ (str[j]-'0');
	}
	return ans;
}
int main() {
  int t;
  cin >> t;
  while (t--) {
	   string s;
	   cin >> s;
     cout << OperationsBinaryString(s) << '\n';
  }
  return 0;
}
