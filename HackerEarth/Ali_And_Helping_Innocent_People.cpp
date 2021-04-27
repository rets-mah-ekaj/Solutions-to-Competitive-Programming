#include<bits/stdc++.h>
using namespace std;

int main() {
	char str[9];
	cin >> str;
	if(str[2]=='A' || str[2]=='E' || str[2]=='I' || str[2]=='O' || str[2]=='U' || str[2]=='Y') {
		cout<<"invalid";
		return 0;
	}
	else if ((((int)str[0] + (int)str[1]) % 2 != 0) || (((int)str[3] + (int)str[4]) % 2 != 0) || ((int)(str[4] + (int)str[5]) % 2 != 0) ||(((int)str[7] + (int)str[8]) % 2 != 0)) {
		cout<<"invalid";
		return 0;
	}
	else
		cout<<"valid";
	return 0;
}
